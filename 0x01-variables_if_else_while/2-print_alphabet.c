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
	while ('a' < 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
