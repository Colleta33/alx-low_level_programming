#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - a function that frees a listint_t list.
 *@head: pointer to the node
 *
 *Return: 0 (success)
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
