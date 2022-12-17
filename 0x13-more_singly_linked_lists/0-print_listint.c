#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: a pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
