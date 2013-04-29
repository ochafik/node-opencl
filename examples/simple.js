var cl = require('../lib/cl');

var platforms = cl.getPlatforms()
platforms.forEach(function(platform) {
    console.log("Platform: " + JSON.stringify(platform, null, 2))
    console.log("name = " + platform.getInfo(cl.PLATFORM_NAME))
    var devices = platform.getDevices(cl.DEVICE_TYPE_ALL)
    console.log("Devices: " + JSON.stringify(devices, null, 2))
    devices.forEach(function(device) {
        var context = platform.createContext([device])
        var queue = context.createCommandQueue(device)
        
        var size = 32
        var source =
            "__kernel void f(char add, __global const char *input, __global char *output) {" +
                //"output[get_global_id(0)] = 2 * input[get_global_id(0)];" +
                "for (int i = 0; i < " + size + "; i++) {" +
                "output[i] = 2 * input[i] + add;" +
                "}" +
            "}";
        var program = context.createProgramWithSource(source)
        program.build()
        console.log("Program: " + JSON.stringify(program, null, 2))
        
        var input = context.createBuffer(cl.MEM_READ_WRITE, size)
        var output = context.createBuffer(cl.MEM_READ_WRITE, size)
        console.log("output: " + JSON.stringify(output, null, 2))
        var kernel = program.createKernel("f")
        kernel.setArg(0, 3, cl.types.BYTE)
        kernel.setArg(1, input)
        kernel.setArg(2, output)
        console.log("kernel: " + JSON.stringify(kernel, null, 2))
        
        var e = queue.enqueueTask(kernel)
        console.log("task event: " + JSON.stringify(e, null, 2))
        
        
        var outputBuffer = new Buffer(size)
        queue.enqueueReadBuffer(output, true, 0, size, outputBuffer)
        var inputBuffer = new Buffer(size)
        queue.enqueueReadBuffer(input, true, 0, size, inputBuffer)
        console.log(inputBuffer)
        console.log(outputBuffer)
        console.log("enqueued task")
        queue.finish()
        console.log("finished")
        
        //var b = context.
    })
})
