#include "main.h"

/**
 * more_numbers - prints 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for ( j = '0'; j <= '9'; j++)
		       _putchar(j);
		_putchar('\n');
	}
}
