#include "lists.h"

/**
 * print_listint - prints everything in a list.
 * @h: the pointer to the linked list
 *
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t p;

	p = 0;
	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
		p++;
	}
	return (p);
}
