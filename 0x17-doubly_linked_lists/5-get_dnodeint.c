#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node, starting from 0.
 *
 * Return: If the node exists, return a pointer to the nth node.
 *         Otherwise, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	if (current != NULL)
		return (current);
	return (NULL);
}
