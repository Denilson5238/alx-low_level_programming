#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with in a constant byte
 * @s: memory area to filled
 * @b: char will copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * *_calloc - will allocates memory for an array
 * @nmemb: number of elements in an array
 * @size: size of each element
 *
 * Return: pointer to allocated the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

