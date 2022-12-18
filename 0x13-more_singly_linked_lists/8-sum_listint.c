#include "lists.h"

/**
 * sum_listint - a function that returns the sum of
 * all the data (n) of a linked list.
 *
 * @head: pointer to first node
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		total = total + head->n;
		head = head->next;
	}
	return (total);
}
