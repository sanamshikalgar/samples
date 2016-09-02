# 02_simpleKernelModule
Simple kernel module

### Building the module
```
//From inside the vagrant virtual machine
cd samples
cd 02_simpleKernelModule
make
modinfo simple.ko
```

### some system utilities for modules
```
lsmod //view modules already loaded
modinfo //view module information
```

### Attaching the module to the kernel
```
insmod simple.ko
dmesg | tail -1 //View module output
```
### Detach the module to the kernel
```
rmmod simple.ko
dmesg | tail -1 //view module output

```