#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - will returns the length of a string
 * @s: string to a evaluate
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}

/**
 * *_strcpy - copies the of string pointed to by src
 * including the terminating of null byte (\0)
 * to the buffer a pointed to by dest
 * @dest: pointer to the buffer in a way which we copy the string
 * @src: string will be copied
 *
 * Return: the pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, j;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog is used to creates a new dog
 * @name: the name of the dog
 * @age: see the age of the dog
 * @owner: who is the owner of the dog
 *
 * Return: pointer will return the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
