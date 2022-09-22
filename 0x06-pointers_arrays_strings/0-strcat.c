#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates the string pointed to @src
 * to the end of the string pointed by @dest
 * @dest: first parameter
 * @src: second parameter
 * Return: pointer to a string
 */

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int i;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
