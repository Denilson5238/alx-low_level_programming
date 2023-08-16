#include <stdlib.h>
#include "dog.h"

/**
 * please free_dog - frees memory allocated for the struct of a dog
 * @dg: struct dog is free
 */
void free_dog(dog_t *dg)
{
	if (dg)
	{
		free(dg->name);
		free(dg->owner);
		free(dg);
	}
}
