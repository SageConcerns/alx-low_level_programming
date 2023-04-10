#include "main.h"

/**
 * binary_to_uint - conversion of a binary number to unsigned integer
 * @b: binary number string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decimalvalue = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimalvalue = 2 * decimalvalue + (b[a] - '0');
	}
	return (decimalvalue);
}
