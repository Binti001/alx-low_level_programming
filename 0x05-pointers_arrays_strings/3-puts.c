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
		_putchar(*(str + len));
		len++;
	}
		_putchar('\n');
}
