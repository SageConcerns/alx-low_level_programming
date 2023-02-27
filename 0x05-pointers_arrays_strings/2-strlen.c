#include "main.h"

/**
 * _strlen - returns length of string
 * *s: string to be checked
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0; /*start counter from 0*/
	
	for (; *s++;)
		a++;
	return (a);
}
