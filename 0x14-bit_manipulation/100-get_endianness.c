#include "main.h"

/**
 * get_endianness - checks if a machine has little or big endianness
 * Return: 0 if it is big and 1 if it is little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
