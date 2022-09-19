#include "main.h"

/**
 * swap_int - swaps two integers' values
 * @a: first int
 * @b: econd int
 * Returns: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
