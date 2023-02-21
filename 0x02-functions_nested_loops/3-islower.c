#include "main.h"

/**
 * _is lower - check if a char is lowercase
 * @c: is char under review
 * Return: 1 for lower case, otherwise 0.
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
