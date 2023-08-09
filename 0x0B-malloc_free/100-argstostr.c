#include "main.h"
#include <stdlib.h>
/**
 * argstostr -is the main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int d, s, t = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (d = 0; d < ac; d++)
	{
		for (s = 0; av[d][s]; s++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (d = 0; d < ac; d++)
	{
	for (s = 0; av[d][s]; s++)
	{
		str[r] = av[i][n];
		t++;
	}
	if (str[t] == '\0')
	{
		str[t++] = '\n';
	}
	}
	return (str);
}

