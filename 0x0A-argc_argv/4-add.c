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
	int sum;

	sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
