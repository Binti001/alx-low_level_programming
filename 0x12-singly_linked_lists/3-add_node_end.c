#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer to pointer
* @str:a string
* Return: a pointer
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new;
	return (new);
}

