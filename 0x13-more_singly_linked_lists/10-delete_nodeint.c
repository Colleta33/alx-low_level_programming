#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_nodeint_at_index -  deletes the node at index index of a listint_t .
 *@head: pointer to the node
 *@index: index of the node
 *Return: 1 (success) or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	listint_t *to_delete;

	if (index == 0)
	{
		to_delete = *head;
		*head = (*head)->next;
	}
	else
	{
		listint_t *prev = *head;

		for (unsigned int i = 0; i < index - 1; i++)
		{
			if (prev == NULL || prev->next == NULL)
			{
				return (-1);
			}
			prev = prev->next;
		}
		to_delete = prev->next;
		prev->next = to_delete->next;
	}
	free(to_delete);
	return (1);
}
