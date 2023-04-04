#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2 -  a function that frees a listint_t list
 *@head:pointer to ponter to the node
 *
 *Desription: sets the head to NULL
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return (nil);

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
