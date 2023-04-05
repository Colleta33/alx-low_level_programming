#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_listint_safe -  function that prints a listint_t linked list.
 *@head : pointer to the node
 *
 *Return: nodes of the list
 *exit status (98)
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t count = 0;

	temp = 0;
	while (temp)
	{
		printf("[%p]%d\n",(void*)temp, temp->n);
		count++;
		temp = temp->next;

		if(head <= temp)
		{
			printf("->[%p]%d\n",(void*)temp, temp->n);
			break;
		}
	}
	exit(98);
	return (count);
}
