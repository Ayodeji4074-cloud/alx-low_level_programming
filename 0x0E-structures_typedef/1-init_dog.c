#include "dog.h"

/**
 * init_dog - function that utilize thw variable of tye struct dog
 * @d: struct
 * @name: name of dog
 * @age: age of the dog
 * @owner: who owns it
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{


	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
