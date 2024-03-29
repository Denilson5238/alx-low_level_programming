#include <stdlib.h>
#include "main.h"

/**
 * *array_range - will creates an array of integers
 * @min: minimum range of the values stored in
 * @max: maximum range of values stored and the number of elements
 *
 * Return: pointer of an new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		ptr[j] = min++;

	return (ptr);
}

