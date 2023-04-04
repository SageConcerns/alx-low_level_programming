#include "lists.h"

/**
 * add_nodeint_end - adding a new node at the end of a listint_t list
 * @head: the pointer to the head of a linked list
 * @n: the integer to add to the end of a linked list
 *
 * Return: address to the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = tmp->next;

	temp->next = newnode;

	return (newnode);
}
