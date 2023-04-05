#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index -  inserts a new node at a given position.
 *@head: pointer that point the node
 *@idx:index of the list
 *@n: number of nodes
 *Return: the address of the new node
 *NULL if it failed
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int idx;

	if (head == NULL)
		return (NULL);

	*new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *head;

	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}

	*current_node = head;
	unsigned int current_idx = 0;

	while (current_node != NULL && current_idx < idx - 1)
	{

		current_node = current_node->next;
		current_idx++;
	}

	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
