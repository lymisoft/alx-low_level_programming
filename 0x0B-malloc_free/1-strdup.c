#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *lym;
	int l, s = 0;

	if (str == NULL)
		return (NULL);
	l = 0;
	while (str[l] != '\0')
		l++;

	lym = malloc(sizeof(char) * (l + 1));

	if (lym == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		lym[s] = str[s];

	return (lym);
}
