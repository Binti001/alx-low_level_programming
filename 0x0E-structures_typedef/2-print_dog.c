#include "dog.h"
#include <stdio.h>
/**
* print_dog - prints a struct dog
* @d: struct pointer
*/

void print_dog(struct dog *d)
{
	if (d = NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
