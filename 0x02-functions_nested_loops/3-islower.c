#include "main.h"

/**
 *  _islower(int c) - checks for lowercase characters
 *  Returns 1 if c is lowercase
 *  Returns 0 otherwise
 *
 * Return: (0)
 */

int _islower(int c)
{
	int result;

	c = 'a';
	if (c <= 'z')
	{
		result = -49;
	}
	else
	{
		result = -48;
	}
	return (result);
}
