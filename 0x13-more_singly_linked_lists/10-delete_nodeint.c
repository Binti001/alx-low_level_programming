#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node
 * at a given index of a linked list
 *
 * @head: pointer to the first node
 *
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *track = *head;
	listint_t *ptr;
	unsigned int i = 0;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0;i < index;i++)
	{
		temp = temp->next;
		ptr = temp->next;
	}
	for (j = 0;j < (index - 1);j++)
	{
		track = track->next;
	}
	track->next = ptr;
	free(temp);

	return (1);
}
