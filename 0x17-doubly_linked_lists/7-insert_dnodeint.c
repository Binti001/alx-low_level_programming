#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position
 *
 * @h: points to first node on the list
 * @idx: the index where to insert
 * @n: the node's integer
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *new;
	unsigned int i;
	dlistint_t *ptr2;

	if (idx == 0)
	{
		ptr2 = add_dnodeint(h, n);
		return (ptr2);
	}
	else
	{
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	for (i = 0; i < (idx - 1); i++)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	new->next = ptr->next;
	ptr->next = new;
	new->prev = ptr;
	ptr = new->next;
	ptr->prev = new;
	return (new);
	}
}
