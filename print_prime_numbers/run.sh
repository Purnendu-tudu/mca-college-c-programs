#!/bin/bash

#run the make command
make

if [ $? -eq 0 ]; then
    ./prime < inputs.txt
else 
    echo "Compilation failed"

fi