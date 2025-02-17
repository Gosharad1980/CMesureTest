How to build PlatformIO based project
=====================================

1. Install PlatformIO Core
2. Install avr-gcc (I use avr-gcc-14.1.0-x64-windows)
3. Download development platform Desktop/Native
4. Run these commands:



```shell
# Clean build files
$ pio run --target clean

# Build project
$ pio run

# Run program
$ .pio/build/stable/program.exe
```
