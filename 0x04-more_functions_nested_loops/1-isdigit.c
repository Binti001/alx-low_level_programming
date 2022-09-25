#include "main.h"

/**
 *  _isdigit - checks if the character is 0 to 9
 *  Return: returns 1 and 0 depending on condition
 *
 *  @c: a character arguement
 *
 *  Returns: 0
 */

int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
