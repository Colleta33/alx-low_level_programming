#include <stdlib.h>
#include "lists.h"

/**
 *free_listint_safe -  function that frees a listint_t list
 *@h: pointer to a pointer to the head node
 *
 *Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	*h = NULL;

	while (current != NULL)
	{
		if (current < current->next)
		{
			temp = current->next;
			free(current);
			current = temp;
			count++;
		}
		else
		{
			*h = current;
			break;
		}
	}

	return (count);
}

