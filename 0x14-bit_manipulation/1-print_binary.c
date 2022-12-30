#include "main.h"
/**
 * print_binary - function that prints the
 * binary representation of a number
 *
 * @n: unsigned long int
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* recursively call the function to */
		/* print the binary representation of the number */
		print_binary(n >> 1);
	}
	/* print the binary number from last digit to first digit */
	putchar((n & 1) + '0');
}
