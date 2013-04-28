var assert = require('assert');
var cl = require('../lib/cl')

var platforms = cl.getPlatforms();
assert(platforms.length > 0, 'No platform found');

platforms.forEach(function(platform) {
    assert(platform.getInfo(cl.PLATFORM_NAME).length > 0, 'Failed to get name')
    console.log("Platform: " + JSON.stringify(platform, null, 2))
    var devices = platform.getDevices(cl.DEVICE_TYPE_ALL)
    assert(devices.length > 0, 'No device found');

    console.log("Devices: " + JSON.stringify(devices, null, 2))
    devices.forEach(function(device) {
        var context = platform.createContext([device])
        var source = "__kernel void f() {}"
        var program = context.createProgramWithSource(source)
        console.log("Program: " + JSON.stringify(program, null, 2))
    })
})
