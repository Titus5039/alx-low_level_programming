#include "main.h"

/**
 * swap_int - swap two integers
 * @a: value 1
 * @b: value 2
 * Retun: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
