#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be checked
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: sting to be evaluated
 *
 * Return: the length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errord for main
 */

void errors(void)

{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguements
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	a1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result =  malloc(sizeof(int) * len)
		if (!result)
			return (1);
	for (i = 0, i <= lenl + len2; i++)
		result[i] = 0;
	for (len1 = lenl - 1; lenl >= 0; lenl--)
	{
		digit1 = s1[lenl] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0);
	_putchar('\n');
	free(result);
	return (0);
}
