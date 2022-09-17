#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;
	j = 'a';
	while (i <= 10)
		{
			while (j <= 'z')
			{
				_putchar(j);
				i++;
			}
			_putchar('\n');
		}
}
