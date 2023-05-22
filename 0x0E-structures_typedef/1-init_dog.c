#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog with the provided values
 * @d: pointer to the struct dog to initialize
 * @name: name to initialize
 * @age: age of the dog
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
