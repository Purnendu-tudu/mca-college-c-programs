#!/bin/bash

#run the make command
make

if [ $? -eq 0 ]; then
    ./rev< inputs.txt
else 
    echo "Compilation failed"

fi