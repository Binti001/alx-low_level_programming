#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: a pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = h;

	 while (ptr != NULL)
	 {
		  printf("%d\n", ptr->n);
		  ptr = ptr->next;
		  count++;
	 }
	 return (count);
}
