#include "main.h"

/**
 *  _isalpha - checks if the character is lowercase
 *  Return: returns 1 and 0 depending on condition
 *
 *  @c: a character arguement
 *
 *  Returns: 0
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
