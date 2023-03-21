#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initojj
 * @d: dee
 * struct dog - dog
 * @name: name
 * @age: age
 * @owner: help
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
