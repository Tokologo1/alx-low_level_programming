#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Entry point
 * @d: passing structures at the functions
 * @name: store a string for main
 * @age: store a number for main
 * @owner: store a string for main
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Passing to structure from main */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
