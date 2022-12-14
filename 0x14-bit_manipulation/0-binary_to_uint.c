#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - function that converts
 * a binary number to an unsigned int
 *
 * @b: pointer to string
 * Return: unsingned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		i <<= 1;
		if (*b & 1)
			i += 1;
		b++;
	}
	return (i);
}
