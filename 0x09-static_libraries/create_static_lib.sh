#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rs liball.a *.o
