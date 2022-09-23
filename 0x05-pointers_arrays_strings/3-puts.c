#include "main.h"

/**
 * _puts - updates the value it points to
 * @str: a char parameter
 * Return: 0
 */

void _puts(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	return (str);
}
