node-opencl
===========

Experiments on auto-generated bindings for OpenCL in V8 / Node.js.

This uses JNAerator's new node.js target, and reuses the ref and ref-array modules.

Hack
====

  * Get JNAerator
  * Regenerate the bindings:
```
    java -jar jnaerator-0.12-SNAPSHOT-shaded.jar
```

Build:
```
    npm install ref ref-array weak
    node-gyp rebuild
```
    
Test:
```
    npm test
```
