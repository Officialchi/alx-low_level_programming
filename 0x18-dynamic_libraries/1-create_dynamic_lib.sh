#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -o libtest.so
rm *.o
