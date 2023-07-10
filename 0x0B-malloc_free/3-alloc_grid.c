#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **lym;
	int l, s;

	if (width <= 0 || height <= 0)
		return (NULL);

	lym = malloc(sizeof(int *) * height);

	if (lym == NULL)
		return (NULL);

	for (l = 0; l < height; l++)
	{
		lym[l] = malloc(sizeof(int) * width);

		if (lym[l] == NULL)
		{
			for (; l >= 0; l--)
				free(lym[l]);

			free(lym);
			return (NULL);
		}
	}

	for (l = 0; l < height; l++)
	{
		for (s = 0; s < width; s++)
			lym[l][s] = 0;
	}

	return (lym);
}
