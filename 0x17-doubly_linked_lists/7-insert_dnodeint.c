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
	dlistint_t *node, *tmp = *h;
	unsigned int count = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (tmp == NULL)
		return (NULL);
	while (tmp != NULL && count < idx - 1)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL)
		return (NULL);
	node->next = tmp->next;
	node->prev = tmp;
	if (tmp->next)
		tmp->next->prev = node;
	tmp->next = node;
	return (node);
}
