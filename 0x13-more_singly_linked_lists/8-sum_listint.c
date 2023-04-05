#include <stdio.h>
#include  <stdlib.h>
#include "lists.h"

/**
 *sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 *@head: pointer to the node
 *
 *Return: 0 (success)
 *
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
