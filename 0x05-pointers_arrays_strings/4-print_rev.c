#include "main.h"
#include <string.h>

/**
 * print_rev - updates the value it points to
 * @s: a char parameter
 * Return: 0
 */

void print_rev(char *s);
{
	int i;
	int len;
	int ch;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = ch;
	}
	return (s);
}
