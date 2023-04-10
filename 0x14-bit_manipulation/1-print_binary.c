#include "main.h"

/**
 * print_binary - converts from decimal equivalent to binary number
 * @n: printed binary number
 */
void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int pn;

	for (a = 63; a >= 0; a--)
	{
		pn = n >> a;
		if (pn & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
