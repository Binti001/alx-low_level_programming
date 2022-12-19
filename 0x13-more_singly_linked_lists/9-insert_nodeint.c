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
	listint_t *new_node, *temp, *tail;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	tail = temp->next;
	new_node->next = tail;
	temp->next = new_node;

	return (new_node);

}
