/*
 *  PSC, Verão 2015/16
 *
 *  SE#2
 */

#include <stdio.h>
#include <string.h>

/* tested version */
#define _strpbrk   _strpbrk

/* assembly version */
char *_strpbrk(const char *cs, const char *ct);

int main()
{
    char *p;
    int n = 0;
    
    p = _strpbrk("", "");
    n += p == NULL;
    
    p = _strpbrk("abc", "abc");
    n += strcmp(p, "abc") == 0;

    p = _strpbrk("abc", "b");
    n += strcmp(p, "bc") == 0;

    p = _strpbrk("abc", "c");
    n += strcmp(p, "c") == 0;

    p = _strpbrk("abc", "d");
    n += p == NULL;
	if (n == 5)
        printf("-> all tests succeeded!\n");
    else
		printf("-> %d/5 test%s failed!\n", 5 - n, (5 - n) > 1 ? "s" : "");
	return n != 5;
}
