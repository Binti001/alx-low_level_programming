#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: destination parameter
 * @src: source parameter
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest = src[i];
		i++;
	}
}

