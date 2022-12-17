#include "lists.h"

/**
 * free_listint - a function that frees a list
 *
 * @head: a pointer to the first node on the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
