#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - functon returns pointer to 2 dimemsional array of integers
 * @width: input of width
 * @height: height input
 * Return: pointer to two dimentional array
 */

int **alloc_grid(int width, int height)
{
	int **mee;

	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);


	if (mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);

			free(mee);

			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)

			mee[x][y] = 0;
	}

	return (mee);
}

