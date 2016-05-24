CFLAGS = -c -m32 -g -O1 -Wall -std=c99 -pedantic
LFLAGS = -g -m32

ex2 : ex2.o reverse.o
	gcc $(LFLAGS) -o ex2 ex2.o reverse.o

ex2.o : ex2.c
	gcc $(CFLAGS) -o ex2.o ex2.c

reverse.o : reverse.s
	gcc $(CFLAGS) -c -o reverse.o reverse.s

clean:
	@rm ex2 ex2.o reverse.o 2> /dev/null | true


