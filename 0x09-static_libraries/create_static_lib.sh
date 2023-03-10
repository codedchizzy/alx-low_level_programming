#!/bin/bash

cc -c 0-isupper.c -o 0-isupper.o
cc -c 0-strcat.c -o 0-strcat.o
cc -c 1-isdigit.c -o 1-isdigit.o
cc -c 1-strncat.c -o 1-strncat.o
cc -c 2-strlen.c -o 2-strlen.o
cc -c 3-islower.c -o 3-islower.o
cc -c 3-strcmp.c -o 3-strcmp.o
cc -c 4-isalpha.c -o 4-isalpha.o
cc -c 5-strstr.c -o 5-strstr.o
cc -c 9-strcpy.c -o 9-strcpy.o
cc -c _putchar.c -o _putchar.o
cc -c 0-memset.c -o 0-memset.o  
cc -c 100-atoi.c -o 100atoi.o
cc -c 1-memcpy.c -o 1-memcpy.o
cc -c 2-strchr.c -o 2-strchr.o 
cc -c 2-strncpy.c -o 2-strncpy.o
cc -c 3-puts.c -o 3-puts.o
cc -c 3-strspn.c -o 3-strspn.o
cc -c 4-strpbrk.c -o 4-strpbrk.o
cc -c 6-abs.c -o 6-abs.o

ar rcs liball.a *.o
