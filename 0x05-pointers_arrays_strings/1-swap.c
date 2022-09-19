#include "main.h"

/**
 * swap_intigers - this function swaps two integers.
 * *a - an inout integer pointer
 * *b - an input integer pointer
 * Return : nothing.
 */

void swap_int(int *a, int *b)
{
	int alx = *a;
	*a = *b;
	*b = alx;
}
