#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: Pointer to type dog
 * @name: Pointer to Dog name
 * @age: Pointer to Dog age
 * @owner: Pointer to Dog owner
 * Return: nought
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
