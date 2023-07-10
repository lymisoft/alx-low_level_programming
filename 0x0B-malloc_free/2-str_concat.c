#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *lym;
	int l, ls;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = ls = 0;
	while (s1[l] != '\0')
		l++;
	while (s2[ls] != '\0')
		ls++;
	lym = malloc(sizeof(char) * (l + ls + 1));

	if (lym == NULL)
		return (NULL);
	l = ls = 0;
	while (s1[l] != '\0')
	{
		lym[l] = s1[l];
		l++;
	}

	while (s2[ls] != '\0')
	{
		lym[l] = s2[ls];
		l++, ls++;
	}
	lym[l] = '\0';
	return (lym);
}
