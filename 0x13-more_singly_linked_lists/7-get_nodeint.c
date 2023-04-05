#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index -  a function that returns the nth node of a listint_t linked list.
 *@head: pointer to the node
 *@index: index of the node
 *Return: NULL iff node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return current;
		}
		count++;
		current = current->next;
	}
	return (NULL);
}

