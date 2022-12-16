#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
*
* @width: number of rows
* @height: number of columns
*
* Return: a pointer to a 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	char *arr;
	int i;
	int j;
	int result;

	i = 0;
	j = 0;
	arr = (int *) malloc(sizeof(int) * (height * width);
	if (str == 'NULL')
	{
		return (NULL);
	}
	else if (arr == 0)
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
