/*
 *  PSC, Verão 2015/16
 *
 *  SE#2
 */

#include <stdio.h>
#include <limits.h>

/* assembly versions */
size_t ctz32(int value);
size_t ctz64(long long value);

/* tested functions */

#define ctz32		ctz32
#define ctz64		ctz64

#define INT_BIT			((sizeof(int) * CHAR_BIT))
#define LONG_LONG_BIT	((sizeof(long long) * CHAR_BIT))

int main()
{
    size_t n, n2, i;
	
	for (n = i = 0; i < INT_BIT; i++)
		n += ctz32(~0 << i) == i;
	if (n == INT_BIT)
		printf("-> all tests of ctz32() succeeded\n");
	else
		printf("-> %zd/%zd test%s of ctz32() failed\n", INT_BIT - n, INT_BIT, INT_BIT - n > 1 ? "s" : "");

	for (n2 = i = 0; i < LONG_LONG_BIT; i++)
		n2 += ctz64(~0LL << i) == i;
	if (n2 == LONG_LONG_BIT)
		printf("-> all tests of ctz64() succeeded\n");
	else
		printf("-> %zd/%zd test%s of ctz64() failed\n", LONG_LONG_BIT - n2, LONG_LONG_BIT, (LONG_LONG_BIT - n2) > 1 ? "s" : "");
	return n != INT_BIT || n2 == LONG_LONG_BIT;
}
