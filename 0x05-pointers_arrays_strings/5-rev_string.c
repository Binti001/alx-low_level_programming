#include "main.h"
#include <string.h>

/**
 * rev_string - prints in reverse
 * @s: a char parameter
 * Return: 0
 */

void rev_string(char *s)
{
	int len;
	int i;
	int ch;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = ch;
	}
}
