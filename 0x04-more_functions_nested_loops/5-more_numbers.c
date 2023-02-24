#include "main.h"

/**
 * more numbers - print the numbers 0 to 14, ten times
 */

void more_numbers(void)
{
	int k, p;

	for (k = 0; k < 10; k++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p >=10)
			{
				_putchar((p / 10) + '0');
			}
			putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
