#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			if (ch == 'e')
			{
				continue;
			}
			if (ch == 'q')
			{
				continue;
			}
		putchar(ch);
		}
		putchar('\n');
		return (0);

}
