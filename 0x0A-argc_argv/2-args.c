#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: first argument
 * @argv: second arguement
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{	
	printf("%s\n", argv[i]);
	}
	return (0);
}
