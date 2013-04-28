var cl = require('../lib/cl');

var platforms = cl.getPlatforms()
platforms.forEach(function(platform) {
    console.log("Platform: " + JSON.stringify(platform, null, 2))
    console.log("name = " + platform.getInfo(cl.PLATFORM_NAME))
    var devices = platform.getDevices(cl.DEVICE_TYPE_ALL)
    console.log("Devices: " + JSON.stringify(devices, null, 2))
    devices.forEach(function(device) {
        var context = platform.createContext([device])
        var source = "__kernel void f() {}"
        var program = context.createProgramWithSource(source)
        console.log("Program: " + JSON.stringify(program, null, 2))
    })
})
