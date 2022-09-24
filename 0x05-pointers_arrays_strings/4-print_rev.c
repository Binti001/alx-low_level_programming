#include "main.h"
#include <string.h>

/**
 * print_rev - prints in reverse
 * @s: a char parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int len;

	len = strlen(s);
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
		_putchar('\n');
}
