#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l = 0, t = 0, lym1 = 0, lym2 = 0;

	while (s1 && s1[lym1])
		lym1++;
	while (s2 && s2[lym2])
		lym2++;

	if (n < lym2)
		s = malloc(sizeof(char) * (lym1 + n + 1));
	else
		s = malloc(sizeof(char) * (lym1 + lym2 + 1));

	if (!s)
		return (NULL);

	while (l < lym1)
	{
		s[l] = s1[l];
		l++;
	}

	while (n < lym2 && l < (lym1 + n))
		s[l++] = s2[t++];

	while (n >= lym2 && l < (lym1 + lym2))
		s[l++] = s2[t++];

	s[l] = '\0';

	return (s);
}
