#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*str_concat -  a function that concatenates two strings
*@s1: first string
*@s2: second string
*Return: pointer to newstring
*/

char *str_concat(char *s1, char *s2)
{
	int s1len;
	int s2len;
	char *newstring;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1len = strlen(s1);
	s2len = strlen(s2);

	newstring = malloc(sizeof(s1len + s2len + 1));
	if (newstring == NULL)
	{
		return (NULL);
	}
	strcpy(newstring, s1);
	strcat(newstring, s2);
	return (newstring);
}
