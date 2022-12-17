#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list,
 * and returns the head node’s data (n)
 *
 * @head: pointer to first node
 *
 * Return: integer popped
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);
	tmp = *head;
	i = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (i);
}
