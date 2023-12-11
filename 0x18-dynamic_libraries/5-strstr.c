#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *s = needle;

		while (*l == *s && *s != '\0')
		{
			l++;
			s++;
		}

		if (*s == '\0')
			return (haystack);
	}
	return (0);
}
