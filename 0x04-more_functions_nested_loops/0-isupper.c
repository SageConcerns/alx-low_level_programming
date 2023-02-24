#include "main.h"

/**
 * _isupper - return 1 if c is upper and o if otherwise
 * @c: character to be checked
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c<= 'Z')
		return (1);
	else
		return (0);
}
