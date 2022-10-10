#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Entry point
 * @d:entry structure with pointer
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(0);
	}
}
