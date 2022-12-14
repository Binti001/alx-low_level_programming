#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - info about a dog
* @name: name of dog
* @age: age of dog
* @owner: name of dog owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif /* _DOG_H_ */
