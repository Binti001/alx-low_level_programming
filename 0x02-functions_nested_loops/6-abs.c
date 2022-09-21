#include "main.h"

/**
* _abs - prints absolute numbers
* Return: returns 1 and 0 depending on condition
* @i : is a character arguement
*/

int _abs(int i)
{

	if (i > 0 || i == 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
