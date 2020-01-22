PROG=selectionSortTester
CC=gcc
CFLAGS=-std=c99
SRC=test.c selectionSort.c

.PHONY: all

all: ${PROG}

${PROG}: ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${PROG}
	
clean: 
	@if test -f ${PROG}; then rm -f ${PROG}; fi
