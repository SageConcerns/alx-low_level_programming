#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first int
 * @b: second int
 * Return 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
