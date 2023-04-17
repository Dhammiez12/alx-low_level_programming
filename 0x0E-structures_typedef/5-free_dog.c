#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees dog
 * @d: pointer to type dog_t
 * Return: nothing
 **/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
