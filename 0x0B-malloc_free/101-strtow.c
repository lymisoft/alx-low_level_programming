#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, l, t;

	flag = 0;
	t = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			t++;
		}
	}

	return (t);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, l = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (l)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (l + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - l;
				k++;
				l = 0;
			}
		}
		else if (l++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
