CFLAGS = -c -m32 -g -O1 -Wall -std=c99 -pedantic
LFLAGS = -g -m32

ex4 : ex4.o select.o
	gcc $(LFLAGS) -o ex4  ex4.o select.o

ex4.o : ex4.c
	gcc $(CFLAGS) -o ex4.o ex4.c

select.o : select.s
	gcc $(CFLAGS) -o select.o select.s

clean:
	@rm ex4 ex4.o select.o 2> /dev/null | true

