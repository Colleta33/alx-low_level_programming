#include "lists.h"

/**
 *find_listint_loop - function that finds the loop in a linked list.
 *@head: pointer to the node
 *
 *Return:address of the node where the loop starts
 *NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head->next;

	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
			break;

		slow = slow->next;
		fast = fast->next->next;
	}

	if (slow != fast)
		return (NULL);

	slow = head;

	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (slow);
}
