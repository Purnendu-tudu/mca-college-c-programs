#a simple bash script to run make then the output of the c

#!/bin/bash

#run the make file
make

if [ $? -eq 0 ]; then
    ./pow < inputs_file.txt
else
    echo "Compilation failed";
fi