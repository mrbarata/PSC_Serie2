/*
 *  PSC, Verão 2015/16
 *
 *  SE#2
 */

#include <stdio.h>

/* tested version */
#define select	select

/* assembly version */
size_t select(void *items, size_t dim, size_t num,
              int (*check)(void *item, void *context), void *result[],
               void *ctx);


int idata[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };

#define DATA_ITEMS    (sizeof(idata) / sizeof(*idata))

int is_even(void *ip, void *ctx)
{
    return ctx == idata && !(*(int *)ip & 1);
}

int is_odd(void *ip, void *ctx)
{
    return ctx == &idata[DATA_ITEMS - 1] && (*(int *)ip & 1);
}
int main()
{
    size_t n, n2, v, i;
    void *res[DATA_ITEMS];
	int result = 0;
    
    n = select(idata, sizeof(*idata), DATA_ITEMS, is_even, res, idata);
    for (v = i = 0; i < n; i++)
        if (is_even(res[i], idata))
            v++;
    if (n != 8 || v != n) {
        printf("-> check even numbers test failed\n");
        result = 1;
    }

    n2 = select(idata, sizeof(*idata), DATA_ITEMS, is_odd, res, &idata[DATA_ITEMS - 1]);
    for (v = i = 0; i < n2; i++)
        if (is_odd(res[i], &idata[DATA_ITEMS - 1]))
            v++;
    if (n2 != 7 || v != n2) {
        printf("-> check odd numbers test failed\n");
        result += 1;
    }
    if (n + n2 != DATA_ITEMS) {
        printf("-> test even plus odd numbers failed\n");
        result += 1;
    }
	if (result == 0)
    	printf("-> all tests succeeded\n");
    return result;
}
