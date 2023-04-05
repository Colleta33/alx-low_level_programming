#include <stdio.h>
#include <stdlib.h>
#include"lists.h"

/**
 *delete_nodeint_at_index -  deletes the node at index index of a listint_t
 *@head: pointer to the node
 *@index: index to the node
 *Return: 1 (success) or -1 (failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next->next;
	free(current->next);
	current->next = temp;

	return (-1);
}
