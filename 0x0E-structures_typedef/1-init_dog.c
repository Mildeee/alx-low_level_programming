#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog 
 * @d: pointer to struct dog to initialise
 * @name: The name to initialise
 * @owner: The owner to initialise
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;

	d->owner = owner;
}
