#include <stdlib.h>
#include "dog.h"

/**
 * init_is dog - initializes the variable of the type of struct dog
 * @d: pointer of struct initialize dog
 * @name: while the name is initialize
 * @age: and the age to initialize
 * @owner: owner of initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

