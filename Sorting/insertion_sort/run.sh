#!/bin/bash

make

if [ $? -eq 0 ]; then
    ./main< inputs.txt
else
    echo "Compilation Failed"
fi