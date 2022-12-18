#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 *
 * @head: pointer to the first node of the list
 *
 * @index: index of pointer to be returned
 *
 * Return: pointer to a node
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = head;
	for (i = 0; i < index; i++)
	{
		if (new->next != NULL)
			new = new->next;
		else
			return (NULL);
	}
	return (new);
}
