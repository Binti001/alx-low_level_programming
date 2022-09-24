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
	int n;

	len = strlen(str);
	i = (len / 2);
	n = (len - 1) / 2;
	while (str[i] != '\0')
	{
		if (len % 2 == 1)
		{
			_putchar(str[n]);
			i++;
		}
		else
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
