#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int s;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}

	s = 0;
	while (s < n && src[s] != '\0')
	{
		dest[l] = src[s];
		l++;
		s++;
	}
	dest[l] = '\0';

	return (dest);
}
