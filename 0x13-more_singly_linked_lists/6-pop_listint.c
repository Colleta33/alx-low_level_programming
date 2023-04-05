#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *pop_listint -  deletes the head node of a listint_t linked list
 *@head: point to pointer to the head node
 *
 *Return: 0 (success)
 *
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	n = (*head)->n;

	*head = (*head)->next;

	free(temp);

	return (n);
}
