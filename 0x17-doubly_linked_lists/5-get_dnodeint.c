#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a doubly linked list
 *
 * @head: points to the first node of the list
 * @index: the index of the node, starting from 0
 *
 * Return: address of nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	return (ptr);
}
