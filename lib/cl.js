var opencl = require('../build/Release/OpenCL');
var ref = require('ref');
var weak = require('weak')
var ArrayType = require('ref-array');

var SizeTArray = ArrayType(ref.types.size_t)
var CharArray = ArrayType(ref.types.char)
var IntArray = ArrayType(ref.types.int)
var PointerArray = ArrayType(ref.types.size_t)

// TODO: check if this affects v8 performance adversely.
var CACHE_INFO_VALUES = true;

function check(err, inside) {
    if (err == opencl.CL_SUCCESS)
        return;
    
    throw (function() {
        switch (err) {
        case opencl.CL_INVALID_KERNEL_ARGS:
            return 'Invalid kernel args'
        case opencl.CL_INVALID_KERNEL_NAME:
            return 'Invalid kernel name'
        case opencl.CL_INVALID_PROGRAM:
            return 'Invalid program'
        case opencl.CL_INVALID_PROGRAM_EXECUTABLE:
            return 'Invalid program executable'
        case opencl.CL_INVALID_KERNEL_DEFINITION:
            return 'Invalid kernel definition'
        case opencl.CL_INVALID_VALUE:
            return 'Invalid value'
        case opencl.CL_OUT_OF_HOST_MEMORY:
            return 'Out of host memory'
        default:
            return 'OpenCL Error (code ' + err + ')'
        }
    })() + (inside ? ' in ' + inside : "")
};

function withCheck(f, inside) {
    var pErr = new IntArray(1)
    var result = f(pErr.buffer)
    check(pErr[0], inside)
    return result
};

function withEvents(eventWaitList, f, inside) {
    var pEvents = eventWaitList ? pointerToPointers(eventWaitList.map(function(event) { return event.event })) : null;
    var pEvent = new SizeTArray(1).buffer
    check(f(eventWaitList ? eventWaitList.length : 0, pEvents, pEvent), inside)
    var e = pEvent.readPointer(0)
    return e ? new CLEvent(e) : null
};

function getInfoBuffer(getter) {
    var pSize = new SizeTArray(1)
    check(getter(0, null, pSize.buffer))
    var size = pSize[0]
    var data = new CharArray(size)
    check(getter(size, data.buffer, null))
    return data.buffer
};

function getPointerArray(getter) {
    var pSize = new IntArray(1)
    check(getter(0, null, pSize.buffer))
    var size = pSize[0]
    var data = new PointerArray(size)
    check(getter(size, data.buffer, null))
    
    var ptrs = []
    for (var i = 0; i < size; i++) {
        var ptr = data.buffer.readPointer(ref.types.size_t.size * i)
        ptrs.push(ptr)
    }
    return ptrs
};

function pointerToPointers(pointers) {
    var data = new SizeTArray(pointers.length)
    for (var i = 0; i < pointers.length; i++) {
        data[i] = pointers[i].address()
    }
    return data.buffer
};

function readCString(buffer) { return ref.readCString(buffer); };
function readUInt(buffer) { return new Uint32Array(buffer)[0]; };
function readBool(buffer) { return buffer[0] != 0; };
function readPointer(buffer) { return buffer.readPointer(0); };
function readULong(buffer) { return ref.readUInt64(buffer); };
function readSizeTArray(buffer) {
    var length = buffer.length / ref.types.size_t.size;
    var ret = [];
    if (ref.types.size_t.size == 4) {
        var a = new Uint32Array(buffer)
        for (var i = 0; i < length; i++)
            ret.push(a[i]);
    } else {
        for (var i = 0; i < length; i++)
            ret.push(ref.readUInt64(buffer, i * 8));
    }
    return ret;
};

function readSizeT(buffer) {
    return ref.types.size_t.size == 4 ? readUInt(buffer) : readULong(buffer);
};

function definePropertyWithDestructor(target, name, value, destructor) {
    Object.defineProperty(target, '_weak_' + name + '_', { value: weak(value, destructor) });
    Object.defineProperty(target, name, { value: value });
};

function defineInfos(proto, infos) {
    proto.infos = {}
    infos.forEach(function(info) {
        proto.infos[info.key] = info
    })
    proto.getInfo = function(key) {
        var info = proto.infos[key];
        var value = info.reader(this.getInfoBuffer(key));
        if (CACHE_INFO_VALUES)
            Object.defineProperty(this, info.name, {
                enumerable: true,
                value: value
            });
        return value;
    };
    var infoProperties = {};
    infos.forEach(function(info) {
        infoProperties[info.name] = {
            enumerable: true,
            configurable: CACHE_INFO_VALUES,
            get: function() { 
                var value = info.reader(this.getInfoBuffer(info.key));
                if (CACHE_INFO_VALUES)
                    Object.defineProperty(this, info.name, {
                        enumerable: true,
                        value: value
                    });
                return value;
            }
        };
    });
    proto.defineInfoProperties = function() {
        Object.defineProperties(this, infoProperties);
    };
};

var CLPlatform = function(platformId) {
    Object.defineProperty(this, 'id', { value: platformId });
    this.defineInfoProperties();
};

defineInfos(CLPlatform.prototype, [
    { name: 'profile', key: opencl.CL_PLATFORM_PROFILE, reader: readCString },
    { name: 'name', key: opencl.CL_PLATFORM_NAME, reader: readCString },
    { name: 'version', key: opencl.CL_PLATFORM_VERSION, reader: readCString },
    { name: 'vendor', key: opencl.CL_PLATFORM_VENDOR, reader: readCString },
    { name: 'extensions', key: opencl.CL_PLATFORM_EXTENSIONS, reader: readCString },
]);

CLPlatform.prototype.getInfoBuffer = function(info) {
    var platformId = this.id
    return getInfoBuffer(function(size, data, pSize) {
        return opencl.clGetPlatformInfo(platformId, info, size, data, pSize)
    })
};

CLPlatform.prototype.getDevices = function(type) {
    if (!type)
        type = opencl.CL_DEVICE_TYPE_ALL;
    
    var platformId = this.id
    var deviceIds = getPointerArray(function(size, data, pSize) {
        return opencl.clGetDeviceIDs(platformId, type, size, data, pSize);
    })
    return deviceIds.map(function(deviceId) { return new CLDevice(deviceId); })
};

CLPlatform.prototype.createContext = function(devices) {
    var deviceIds = devices.map(function(device) { return device.id; });
    
    return new CLContext(withCheck(function(pErr) {
        return opencl.clCreateContext(
            null, deviceIds.length, pointerToPointers(deviceIds), null, null, pErr);
    }))
};

var CLDevice = function(deviceId) {
    Object.defineProperty(this, 'id', { value: deviceId });
    this.defineInfoProperties();
};

defineInfos(CLDevice.prototype, [
    { name: 'profile', key: opencl.CL_DEVICE_PROFILE, reader: readCString },
    { name: 'name', key: opencl.CL_DEVICE_NAME, reader: readCString },
    { name: 'version', key: opencl.CL_DEVICE_VERSION, reader: readCString },
    { name: 'driverVersion', key: opencl.CL_DRIVER_VERSION, reader: readCString },
    { name: 'vendor', key: opencl.CL_DEVICE_VENDOR, reader: readCString },
    { name: 'vendorId', key: opencl.CL_DEVICE_VENDOR_ID, reader: readUInt },
    { name: 'extensions', key: opencl.CL_DEVICE_EXTENSIONS, reader: readCString },
    { name: 'addressBits', key: opencl.CL_DEVICE_ADDRESS_BITS, reader: readUInt },
    { name: 'endianLittle', key: opencl.CL_DEVICE_ADDRESS_BITS, reader: readBool },
    { name: 'globalMemSize', key: opencl.CL_DEVICE_GLOBAL_MEM_SIZE, reader: readULong },
    { name: 'globalMemCachelineSize', key: opencl.CL_DEVICE_GLOBAL_MEM_CACHELINE_SIZE, reader: readUInt },
    { name: 'globalMemCacheSize', key: opencl.CL_DEVICE_GLOBAL_MEM_CACHE_SIZE, reader: readULong },
    { name: 'globalMemCacheType', key: opencl.CL_DEVICE_GLOBAL_MEM_CACHE_TYPE, reader: readUInt },
    { name: 'imageSupport', key: opencl.CL_DEVICE_IMAGE_SUPPORT, reader: readBool },
    { name: 'image2DMaxHeight', key: opencl.CL_DEVICE_IMAGE2D_MAX_HEIGHT, reader: readSizeT },	
    { name: 'image2DMaxWidth', key: opencl.CL_DEVICE_IMAGE2D_MAX_WIDTH, reader: readSizeT },
    { name: 'image3DMaxDepth', key: opencl.CL_DEVICE_IMAGE3D_MAX_DEPTH, reader: readSizeT },
    { name: 'image3DMaxHeight', key: opencl.CL_DEVICE_IMAGE3D_MAX_HEIGHT, reader: readSizeT },	
    { name: 'image3DMaxWidth', key: opencl.CL_DEVICE_IMAGE3D_MAX_WIDTH, reader: readSizeT },
    { name: 'deviceType', key: opencl.CL_DEVICE_TYPE, reader: readUInt },
    { name: 'maxComputeUnits', key: opencl.CL_DEVICE_MAX_COMPUTE_UNITS, reader: readUInt },
    { name: 'maxWorkItemDimensions', key: opencl.CL_DEVICE_MAX_WORK_ITEM_DIMENSIONS, reader: readUInt },
    { name: 'maxWorkItemSizes', key: opencl.CL_DEVICE_MAX_WORK_ITEM_SIZES, reader: readSizeTArray },
    { name: 'maxWorkGroupSize', key: opencl.CL_DEVICE_MAX_WORK_GROUP_SIZE, reader: readSizeT },
    { name: 'preferredVectorWidthChar', key: opencl.CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR, reader: readUInt },
    { name: 'preferredVectorWidthShort', key: opencl.CL_DEVICE_PREFERRED_VECTOR_WIDTH_SHORT, reader: readUInt },
    { name: 'preferredVectorWidthInt', key: opencl.CL_DEVICE_PREFERRED_VECTOR_WIDTH_INT, reader: readUInt },
    { name: 'preferredVectorWidthLong', key: opencl.CL_DEVICE_PREFERRED_VECTOR_WIDTH_LONG, reader: readUInt },
    { name: 'preferredVectorWidthFloat', key: opencl.CL_DEVICE_PREFERRED_VECTOR_WIDTH_FLOAT, reader: readUInt },
    { name: 'preferredVectorWidthDouble', key: opencl.CL_DEVICE_PREFERRED_VECTOR_WIDTH_DOUBLE, reader: readUInt },
    { name: 'maxClockFrequency', key: opencl.CL_DEVICE_MAX_CLOCK_FREQUENCY, reader: readUInt },
    { name: 'maxMemAllocSize', key: opencl.CL_DEVICE_MAX_MEM_ALLOC_SIZE, reader: readULong },
    { name: 'maxReadImageArgs', key: opencl.CL_DEVICE_MAX_READ_IMAGE_ARGS, reader: readUInt },
    { name: 'maxWriteImageArgs', key: opencl.CL_DEVICE_MAX_WRITE_IMAGE_ARGS, reader: readUInt },
    { name: 'maxSamplers', key: opencl.CL_DEVICE_MAX_SAMPLERS, reader: readUInt },
    { name: 'maxParameterSize', key: opencl.CL_DEVICE_MAX_PARAMETER_SIZE, reader: readSizeT },
    { name: 'memBaseAddrAlign', key: opencl.CL_DEVICE_MEM_BASE_ADDR_ALIGN, reader: readUInt },
    { name: 'minDataTypeAlignSize', key: opencl.CL_DEVICE_MIN_DATA_TYPE_ALIGN_SIZE, reader: readUInt },
    { name: 'singleFPConfig', key: opencl.CL_DEVICE_SINGLE_FP_CONFIG, reader: readUInt },
    { name: 'maxConstantBufferSize', key: opencl.CL_DEVICE_MAX_CONSTANT_BUFFER_SIZE, reader: readULong },
    { name: 'maxConstantArgs', key: opencl.CL_DEVICE_MAX_CONSTANT_ARGS, reader: readUInt },
    { name: 'localMemType', key: opencl.CL_DEVICE_LOCAL_MEM_TYPE, reader: readUInt },
    { name: 'localMemSize', key: opencl.CL_DEVICE_LOCAL_MEM_SIZE, reader: readULong },
    { name: 'errorCorrectionSupport', key: opencl.CL_DEVICE_ERROR_CORRECTION_SUPPORT, reader: readBool },
    { name: 'profilingTimerResolution', key: opencl.CL_DEVICE_PROFILING_TIMER_RESOLUTION, reader: readSizeT },
    { name: 'available', key: opencl.CL_DEVICE_AVAILABLE, reader: readBool },
    { name: 'compilerAvailable', key: opencl.CL_DEVICE_COMPILER_AVAILABLE, reader: readBool },
    { name: 'executionCapabilities', key: opencl.CL_DEVICE_EXECUTION_CAPABILITIES, reader: readUInt },
    { name: 'queueProperties', key: opencl.CL_DEVICE_QUEUE_PROPERTIES, reader: readUInt },
    { name: 'platform', key: opencl.CL_DEVICE_PLATFORM, reader: function(buffer) {
        return new CLPlatform(readPointer(buffer)); 
    }},
]);

CLDevice.prototype.getInfoBuffer = function(key) {
    var deviceId = this.id
    return getInfoBuffer(function(size, data, pSize) {
        return opencl.clGetDeviceInfo(deviceId, key, size, data, pSize)
    })
};

var CLCommandQueue = function(commandQueue) {
    definePropertyWithDestructor(this, 'commandQueue', commandQueue, function() { opencl.clReleaseCommandQueue(this) });
};

CLCommandQueue.prototype.enqueueTask = function(kernel, eventWaitList) {
    var commandQueue = this.commandQueue;
    return new CLEvent(withEvents(eventWaitList, function(numEventInWaitList, pEventWaitList, pEvent) {
        return opencl.clEnqueueTask(commandQueue, kernel.kernel, numEventInWaitList, pEventWaitList, pEvent);
    }, 'enqueueTask'));
};

CLCommandQueue.prototype.flush = function() {
    check(opencl.clFlush(this.commandQueue), 'flush');
};

CLCommandQueue.prototype.finish = function() {
    check(opencl.clFinish(this.commandQueue), 'finish');
};

CLCommandQueue.prototype.enqueueNDRangeKernel = function(kernel, globalOffsets, globalSizes, localSizes, eventWaitList) {
    var dims = globalSizes.length
    var commandQueue = this.commandQueue;
    return withEvents(eventWaitList, function(numEventInWaitList, pEventWaitList, pEvent) {
        return opencl.clEnqueueNDRangeKernel(commandQueue, kernel.kernel, dims, globalOffsets, globalSizes, localSizes, numEventInWaitList, pEventWaitList, pEvent);
    }, 'enqueueNDRangeKernel');
};

var CLKernel = function(kernel) {
    definePropertyWithDestructor(this, 'kernel', kernel, function() { opencl.clReleaseKernel(this) });
};

var CLProgram = function(program) {
    definePropertyWithDestructor(this, 'program', program, function() { opencl.clReleaseProgram(this) });
};

CLProgram.prototype.build = function(name, options) {
    check(opencl.clBuildProgram(this.program, 0, null, options || '', null, null), 'build');
};

CLProgram.prototype.createKernel = function(name) {
    var program = this.program
    return new CLKernel(withCheck(function(pErr) {
        return opencl.clCreateKernel(program, name/*ref.allocCString(name)*/, pErr);
    }, 'createKernel'));
};

var CLEvent = function(event) {
    definePropertyWithDestructor(this, 'event', event, function() { opencl.clReleaseEvent(this) });
};

CLEvent.prototype.wait = function() {
    check(opencl.clWaitForEvents(1, this.event.ref()));
};

var CLMem = function(mem) {
    definePropertyWithDestructor(this, 'mem', event, function() { opencl.clReleaseMemObject(this) });
};

var CLContext = function(context) {
    definePropertyWithDestructor(this, 'context', context, function() { opencl.clReleaseContext(this) });
};

CLContext.prototype.createCommandQueue = function(device, properties) {
    var context = this.context
    return new CLCommandQueue(withCheck(function(pErr) {
        return opencl.clCreateCommandQueue(context, device.id, properties || 0, pErr);
    }));
};

CLContext.prototype.createProgramWithSource = function(source) {
    var context = this.context
    return new CLProgram(withCheck(function(pErr) {
        return opencl.clCreateProgramWithSource(
            context, 1, ref.allocCString(source).ref(), null, pErr)
    }), 'createProgramWithSource')
};

CLContext.prototype.createBuffer = function(flags, size, hostPointer) {
    var context = this.context
    return withCheck(function(pErr) {
        return opencl.clCreateBuffer(context, flags || 0, size, hostPointer || null, pErr)
    }, 'createBuffer')
};

// WebCL alias.
CLContext.prototype.createProgram = CLContext.prototype.createProgramWithSource;

exports.getPlatforms = function() {
    var platformIds = getPointerArray(function(size, data, pSize) {
        return opencl.clGetPlatformIDs(size, data, pSize);
    })
    return platformIds.map(function(platformId) { return new CLPlatform(platformId); })
};

for (var v in opencl) {
    if (v.indexOf('CL_') == 0) {
        Object.defineProperty(exports, v.substring(3), { value: opencl[v] })
    }
}
