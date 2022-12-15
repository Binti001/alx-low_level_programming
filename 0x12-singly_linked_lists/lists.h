#ifndef _LISTS_H_
#define _LISTS_H_
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* struct list_t - list of elements
* @str: a string
* @len: length of the string
* @next: pointer to next node
*/

struct list_t
{
	char *str;
	size_t len;
	struct list_t *next;
};

typedef struct list_t list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* _LISTS_H_*/
