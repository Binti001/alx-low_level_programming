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

	len = strlen(s);
	for (len = len - 1; len >= 0; len--)
	{
		return (s[len]);
	}
}
