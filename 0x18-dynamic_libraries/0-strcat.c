#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 *
 */
char *_strcat(char *dest, char *src)
{
	int l = 0, s = 0;

	while (*(dest + l) != '\0')
	{
		l++;
	}

	while (s >= 0)
	{
		*(dest + l) = *(src + s);
		if (*(src + s) == '\0')
			break;
		l++;
		s++;
	}
	return (dest);
}
