#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index -  inserts a new node at a given position.
 *@head: pointer to the node
 *@idx: index to the node
 *@n: integer
 *Return: address of the new node or  NULL (failed)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int i;

	if (head  == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;

	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

