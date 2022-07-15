#!/bin/bash
gcc -c -Wall -Werror -fPIC *.c
gcc -shared -o libdynamic.so *.o
