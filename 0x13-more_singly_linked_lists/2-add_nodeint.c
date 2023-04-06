#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint - adds a new node at the beginning of a listint_t list.
 *@head: double pointer to the head of te list
 *@n: integer valueto store a node
 *Return: adress of the new element
 *NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	const listint_t *current = *head;

		while (current != NULL)
		{
			printf("%d\n", current->n);
			current = current->next;
		}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (NULL);
}
