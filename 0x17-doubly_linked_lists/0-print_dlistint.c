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
	size_t count = 0;
	const dlistint_t *head;

	head = h;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
	return (count);
}
