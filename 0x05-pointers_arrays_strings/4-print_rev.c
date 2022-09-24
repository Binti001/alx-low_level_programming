#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: a char parameter
 * Return: 0
 */

void print_rev(char *s);
{
	int i;
	int len;
	int ch;

	len = _strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = ch;
		_putchar(*(s + len));
	}
	_putchar('\n');
}
