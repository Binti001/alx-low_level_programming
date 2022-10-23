#include "dog.h"
#include <stdio.h>
/**
* print_dog - prints a struct dog
* @d: struct pointer
*/

void print_dog(struct dog *d)
{
	struct dog A;
	d = &A;
	d->name = A.name;
	d->age = A.age;
	d->owner = A.owner;
	
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
