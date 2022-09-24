#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: a parameter
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int len;

	len = strlen(str);
	i = (len / 2);
	while (str[i] != '\0')
	{
		if (len % 2 == 1)
		{
			_putchar(str[i+1]);
		}
		else
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
