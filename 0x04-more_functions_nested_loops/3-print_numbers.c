#include "main.h"

/**
 * print_numbers - print numbers from zero to nine
 */

void print_numbers(void)
{
	char z = '0';

	while (z <= '9')
	{
		_putchar(z);
		z++;
	}

	_putchar('\n');
}
