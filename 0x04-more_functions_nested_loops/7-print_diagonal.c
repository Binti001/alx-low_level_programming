#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: a parameter
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int j;
	int k;
	int a;

	k = 1;
	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		for (a = 1; a < i; a++)
		{
			_putchar(' ');
		}
		for (j = 0; j < k; j++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
	
}
