#!/bin/bash

cd ~/competitive/practice
if [ $# -eq 0 ]; then
    ./a.out < in.txt > out.txt
elif [ "$1" == "terminal" ]; then
    ./a.out < in.txt
else
    ./a.out < in.txt > "$1.txt"
fi