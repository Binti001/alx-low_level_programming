#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int ch;
	int dh;

	ch = 'a';
	dh = 'A';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		while (dh <= 'Z')
		{
			putchar(dh);
			dh++;
		}
		putchar('\n');
		return (0);
}

