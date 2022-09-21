#include "main.h"

/**
 *  _islower - checks if the character is lowercase
 *  Return: returns 1 and 0 depending on condition
 *
 *  @c: a character arguement
 *
 *  Returns: 0
 */

int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
