#!/bin/bash

CC = gcc
DEBUG = -Wall -lm
DEP=  init.o main.o

run: ${DEP}
	${CC} ${DEBUG} -o run ${DEP}
%.o: %.c 
	${CC} ${DEBUG} -c $^

clean:
	rm -f run *.o
	rm *.save*
	rm *.gch
