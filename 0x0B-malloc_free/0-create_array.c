#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *lym;
	unsigned int l;

	lym = malloc(sizeof(char) * size);
	if (size == 0 || lym == NULL)
		return (NULL);

	for (l = 0; l < size; l++)
		lym[l] = c;
	return (lym);
}
