#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int ch;

	ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			if (ch == 'e')
		{
			continue;
		}
			if (ch == 'q')
		{
			continue;
		}
			ch++;
		}
		putchar('\n');
		return (0);

}
