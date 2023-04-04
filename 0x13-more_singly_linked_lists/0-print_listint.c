#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *@h: head
 *
 *Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	for (h != NULL)
	{
		printf("[%d]", h->n);
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
