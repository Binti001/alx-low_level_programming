#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at the end of a list
 *
 * @head: a pointer
 *
 * @n: an integer
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *newnode;

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	return (newnode);
}
