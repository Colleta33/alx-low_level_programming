#include <stdio.h>
#include "lists.h"

/**
 *reverse_listint -  function that reverses a listint_t linked list.
 *@head: pointer to pointer to the node
 *
 *Return: pointer tothe first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
