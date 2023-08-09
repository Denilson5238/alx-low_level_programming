#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - the nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **eee;
	int r, s;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (eee == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		eee[r] = malloc(sizeof(int) * width);

		if (eee[r] == NULL)
		{
			for (; r >= 0; r--)
				free(eee[r]);

			free(eee);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
	{
		for (s = 0; s < width; s++)
			eee[r][s] = 0;
	}

	return (eee);
}

