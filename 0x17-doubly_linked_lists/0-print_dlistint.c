#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of
 * a doubly linked list
 *
 * @h: points to first node
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
