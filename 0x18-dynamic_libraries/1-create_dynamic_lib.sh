#!/bin/bash

c_files=$(find . -name "*.c")


for file in $c_files; do
    gcc -c -fPIC "$file" -o "${file%.c}.o"
done

gcc -shared -o liball.so *.o

rm *.o

echo "Dynamic library liball.so created."
