#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the variable of type struct dog
 * @dg: pointer of struct initialize dog
 * @name: while the name is initialize
 * @age: and the age to initialize
 * @owner: owner of initialize
 */
void init_dog(struct dog *dg, char *name, float age, char *owner)
{
	if (dg == NULL)
		dg = malloc(sizeof(struct dog));
	dg->name = name;
	dg->age = age;
	dg->owner = owner;
}

