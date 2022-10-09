#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory, which
* contains a copy of the string given as a parameter
*
* @str: string given as a parameter
* Return: a pointer to the string
*/

char *_strdup(char *str)
{
	char *arr;
	int i;
	int j;
	int result;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
		result = i;
	}
	arr = (char *) malloc(sizeof(char) * (result + 1));
	if (str == 0)
	{
		return (NULL);
	}
	else if (arr == NULL || arr < (result + 1))
	{
		return (NULL);
	}
	else
	{
	while (str[j] != '\0')
	{
		arr[j] = str[j];
		j++;
	}
	}
	return (arr);
}
