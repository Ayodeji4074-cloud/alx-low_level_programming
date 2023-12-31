#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: struct initialized
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
