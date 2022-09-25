#include "main.h"

/**
 *  _isupper - checks if the character is lowercase
 *  Return: returns 1 and 0 depending on condition
 *
 *  @c: a character arguement
 *
 *  Returns: 0
 */

int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
