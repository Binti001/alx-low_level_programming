#include "main.h"
#include <stdlib.h>

/**
* create_array -creates an array of chars,
* and initializes it with a specific char
*
* @size: creates number of blocks
*
* @c: initialised char
*
* Return: a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;
	arr = (char *) malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else if (arr == 0)
	{
		return (NULL);
	}
	else
	{
	while (i <= size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
	}
}
