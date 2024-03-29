#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - t prints all the elements of a dlistint_t list.
 *@const dlistint_t *h: elements in the list
 *@h: head node
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
