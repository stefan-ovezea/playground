#!/bin/bash
if [[ ! -e $1 ]]; then
    echo "Please input a file"
    exit
fi

INPUT_FILE=$1
OUTPUT_FILE=$(echo $1 | sed -e 's/.cpp/.o/g')

echo "Compiling $INPUT_FILE..."
g++ -std=c++14 $INPUT_FILE -o $OUTPUT_FILE

if [[ -f $OUTPUT_FILE ]]; then
    echo "Compile successful. Program output: "
    ./$OUTPUT_FILE
    echo "Cleaning up..."
    rm -rf $OUTPUT_FILE
    echo "Done."
else
    echo "Done."
fi
