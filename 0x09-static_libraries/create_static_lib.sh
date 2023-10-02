#!/bin/bash
# creates a static library called liball.a from all the .c files that are in current directory

gcc -c *.c ./
ar rc liball.a *.o
ranlib liball.a
