#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *sum_dlistint - add up the nodes
 *@head: the first node
 *
 *Return:0 success
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

/**
 *main - Entry point
 *@void: 0
 *Return: 0 success
 */
int main(void)
{
	int sum = sum_dlistint(node1);
	dlistint_t *node1 = malloc(sizeof(dlistint_t));
	dlistint_t *node2 = malloc(sizeof(dlistint_t));
	dlistint_t *node3 = malloc(sizeof(dlistint_t));

	node1->n = 1;
	node1->prev = NULL;
	node1->next = node2;

	node2->n = 2;

	node2->prev = node1;
	node2->next = node3;

	node3->n = 3;
	node3->prev = node2;
	node3->next = NULL;

	printf("Sum of the linked list: %d\n", sum);

	free(node1);
	free(node2);
	free(node3);

	return (0);
}
