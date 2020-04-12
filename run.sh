#! /bin/bash

rm -rf bin/*
rm -rf *.o
gcc -c *.c
gcc -o bin/point *.c
rm -rf *.o
