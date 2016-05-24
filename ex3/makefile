CFLAGS = -c -m32 -g -O1 -Wall -std=c99 -pedantic
LFLAGS = -g -m32

ex3 : ex3.o _strpbrk.o
	gcc $(LFLAGS) -o ex3 ex3.o _strpbrk.o

ex3.o : ex3.c
	gcc $(CFLAGS) -o ex3.o ex3.c

_strpbrk.o : _strpbrk.s
	gcc $(CFLAGS) -c -o _strpbrk.o _strpbrk.s

clean:
	@rm ex3 ex3.o _strpbrk.o 2> /dev/null | true


