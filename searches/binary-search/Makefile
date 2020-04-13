PROG=search
CC=gcc
CFLAGS=-std=c99
SRC=binary_search.c

.PHONY: all

all: ${PROG}

test: all
	./${PROG}

${PROG}: ${SRC}
	${CC} ${CFLAGS} ${SRC} -c
	
clean: 
	@if test -f ${PROG}; then rm -f ${PROG}; fi
