#include "main.h"

/**
 * _strlen- updates the value it points to
 * @s: a char parameter
 * Return: 0
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
