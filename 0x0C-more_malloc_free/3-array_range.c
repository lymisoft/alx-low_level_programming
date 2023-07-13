#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *lym;
	int l, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	lym = malloc(sizeof(int) * size);

	if (lym == NULL)
		return (NULL);

	for (l = 0; min <= max; l++)
		lym[l] = min++;

	return (lym);
}
