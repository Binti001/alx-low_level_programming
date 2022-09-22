#include "main.h"

/**
 * getStringLength - gets the length of the string
 * @str: String
 * Return: length of string
 */

int getStringLength (char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
