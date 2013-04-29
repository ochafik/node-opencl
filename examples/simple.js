var cl = require('../lib/cl');

var platforms = cl.getPlatforms()
platforms.forEach(function(platform) {
    console.log("Platform: " + JSON.stringify(platform, null, 2))
    console.log("name = " + platform.getInfo(cl.PLATFORM_NAME))
    var devices = platform.getDevices(cl.DEVICE_TYPE_ALL)
    console.log("Devices: " + JSON.stringify(devices, null, 2))
    devices.forEach(function(device) {
        var context = platform.createContext([device])
        
        var source =
            "__kernel void f(__global const char *input, __global char *output) {" +
                //"output[get_global_id(0)] = 2 * input[get_global_id(0)];" +
                "output[0] = 2 * input[0] + 100;" +
            "}";
        var program = context.createProgramWithSource(source)
        program.build()
        console.log("Program: " + JSON.stringify(program, null, 2))
        
        var size = 32
        var queue = context.createCommandQueue(device)
        var input = context.createBuffer(cl.MEM_READ_WRITE, size)
        var output = context.createBuffer(cl.MEM_READ_WRITE, size)
        var kernel = program.createKernel("f")
        
        queue.enqueueTask(kernel)
        queue.finish()
        //var b = context.
    })
})
