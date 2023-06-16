#include <stdlib.h>
#include "lists.h"

/**
 *free_dlistint -  function that frees a dlistint_t list.
 *@head: the head node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *temp = current;

		current = current->next;
		free(temp);
	}
}
