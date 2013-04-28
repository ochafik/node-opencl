// node --expose-gc

var cl = require('../lib/cl');
var p = cl.getPlatforms()[0];
var c = p.createContext([p.getDevices()[0]]);
global.gc();
c.release();
c.release();
c = p.createContext([p.getDevices()[0]]);
c = null;
global.gc();

var sleep = require('sleep');
sleep.sleep(5)
