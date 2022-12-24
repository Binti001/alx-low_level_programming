#include "lists.h"

/**
 * sum_dlistint - eturns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: points to the first node on the list
 *
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *ptr = head;

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		while (ptr != NULL)
		{
			count = count + ptr->n;
			ptr = ptr->next;
		}
		return (count);
	}
}
