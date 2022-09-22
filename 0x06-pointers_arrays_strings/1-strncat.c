#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates the string pointed to @src
 * to the end of the string pointed by @dest
 * @dest: first parameter
 * @src: second parameter
 * @n: character argument
 * Return: pointer to a string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;
	int i;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 1; i < n; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
