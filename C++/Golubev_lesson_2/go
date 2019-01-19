
#!/bin/bash

name=$1
cmake . -B./build &&
cmake --build build &&
[ -f "./build/$name" ] && ./build/$name