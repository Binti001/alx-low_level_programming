#include <stdio.h>

/**
 * main - prints a number, comma then space
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int a;
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
		for (a = 0; a < 1; a++)
		{
			putchar(',');
		for (j = 0; j < 1; j++)
		{
			putchar(' ');
		}
		}
	}
	putchar('\n');
		return (0);
}
