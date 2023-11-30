#!/bin/bash

make

if [ $? -eq 0 ]; then
    ./sort< inputs.txt
else
    echo "compilation failed"

fi