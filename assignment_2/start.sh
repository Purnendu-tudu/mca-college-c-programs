#!/bin/bash

#check if folder name is provided

if [ $# -eq 0 ]; then
    echo "Usage: $0 <folder_name>"
    exit 1
fi

folder_name="$1"

mkdir "$folder_name"


if [ $? -eq 0 ]; then
    echo "Folder $folder_name created successfully."

    #now create the files
    touch "$folder_name/main.c" "$folder_name/Makefile" "$folder_name/run.sh" "$folder_name/inputs.txt"

    echo "--$folder_name/"
    echo "---main.c" 
    echo "---Makefile" 
    echo "---run.sh" 
    echo "---inputs.txt" 

else

    echo "Failed to create folder $folder_name."

fi
