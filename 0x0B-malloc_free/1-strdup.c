#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate it to the new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *jjj;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	jjj = malloc(sizeof(char) * (a + 1));

	if (jjj == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		jjj[b] = str[b];

	return (jjj);
}

