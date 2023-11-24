#!/bin/bash

#run the make command
make

if [ $? -eq 0 ]; then
    ./gcd< inputs.txt
else 
    echo "Compilation failed"

fi