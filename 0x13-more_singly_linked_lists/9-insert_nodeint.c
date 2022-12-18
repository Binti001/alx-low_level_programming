#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position
 *
 * @head: pointer to the first node
 *
 * @idx: position to insert the node
 *
 * @n: new node's data
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = *head;
	listint_t *temp = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint_end(head, n));

	while (temp && count < idx - 1)
	{
		temp = temp->next;
		 count++;
	}

	if (temp == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
