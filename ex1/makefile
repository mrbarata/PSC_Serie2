CFLAGS = -c -m32 -g -O1 -Wall -std=c99 -pedantic
LFLAGS = -g -m32

ex1 : ex1.o ctz.o
	gcc $(LFLAGS) -o ex1 ex1.o ctz.o

ex1.o : ex1.c
	gcc $(CFLAGS) -o ex1.o ex1.c

ctz.o : ctz.s
	gcc $(CFLAGS) -c -o ctz.o ctz.s

clean:
	@rm ex1 ex1.o ctz.o 2> /dev/null | true


