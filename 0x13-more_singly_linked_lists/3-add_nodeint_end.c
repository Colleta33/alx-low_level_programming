#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: double pointer
 *@n: integer to te node
 *Return: new node or NULL if i failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t current_node = **head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
		return (new_node);
}

