#include "lists.h"

/**
 * free_dlistint -  a function that frees a dlistint_t list
 *
 * @head: points to the first node on the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *delete;

	while (head != NULL)
	{
		delete = head;
		head = head->next;
		free(delete);
	}
}
