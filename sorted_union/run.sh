#!/bin/bash

#run the make command
make

if [ $? -eq 0 ]; then
    ./sort< inputs.txt
else 
    echo "Compilation failed"

fi