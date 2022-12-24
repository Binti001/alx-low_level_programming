#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements of
 * a doubly linked list
 *
 * @h: points to first node
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *head;

	head = h;
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
