#include "main.h"

/**
* _abs - prints absolute numbers
* @i : is a character arguement
* Return : 0
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
