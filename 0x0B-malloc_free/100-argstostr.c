#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int s, t, f = 0, l = 0;
	char *lym;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (s = 0; s < ac; s++)
	{
		for (t = 0; av[s][t]; t++)
			l++;
	}
	l += ac;

	lym = malloc(sizeof(char) * l + 1);
	if (lym == NULL)
		return (NULL);
	for (s = 0; s < ac; s++)
	{
	for (t = 0; av[s][t]; t++)
	{
		lym[f] = av[s][t];
		f++;
	}
	if (lym[f] == '\0')
	{
		lym[f++] = '\n';
	}
	}
	return (lym);
}
