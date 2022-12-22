#include "lists.h"

/**
 * print_listint_safe -  a function that prints a linked list.
 *
 * @head: a pointer to the first node
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	listint_t *temp;

	if (!head)
		exit(98);
	temp = (listint_t *)head;
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		if (head >= temp)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		temp = (listint_t *)head;
		size++;
	}
	return (size);
}
