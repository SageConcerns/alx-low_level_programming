#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: Character to be printed
 *
 * Return: On success 1.
 * On error: -1 is returned and erno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
