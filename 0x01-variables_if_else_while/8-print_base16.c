#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)

{
	int ch;

	ch = 0x0;
		while (ch <= 0xF)
	{
		putchar(ch);
		ch++;
	}
putchar('\n');
return (0);
}
