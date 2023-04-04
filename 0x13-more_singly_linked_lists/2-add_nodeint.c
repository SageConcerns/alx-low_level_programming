#include "lists.h"

/**
 * add_nodeint - adding a new node at the beginning
 * of a listint_t list.
 * @head: pointer to the head of a linked list
 * @n: the Int to add to list
 *
 * Return: the pointer to the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
