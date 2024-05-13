#!/bin/bash

CC = gcc
DEBUG = -Wall -lm
DEP=  middle_linked_list.o reverse_linked_list.o create_node.o insert_node.o display.o main.o

run: ${DEP}
	${CC} ${DEBUG} -o run ${DEP}
%.o: %.c 
	${CC} ${DEBUG} -c $^

clean:
	rm -f run *.o
	rm *.save*
	rm *.gch
