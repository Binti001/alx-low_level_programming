#include "main.h"

/**
 * print_square - prints a square
 * @size: a parameter
 * Return: 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (a = 0; a < size; a++)
		{
			_putchar(#);
		}
		_putchar('\n');
	}
}
