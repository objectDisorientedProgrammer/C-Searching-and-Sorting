PROG=search
CC=gcc
CFLAGS=-std=c99
SRC=main.c binary_search.c

.PHONY: all

all: ${PROG}

test: all
	./${PROG}

${PROG}: ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${PROG}
	
clean: 
	@if test -f ${PROG}; then rm -f ${PROG}; fi
