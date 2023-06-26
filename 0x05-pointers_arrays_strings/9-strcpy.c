#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (l >= 0)
	{
		*(dest + l) = *(src + l);
		if (*(src + l) == '\0')
			break;
		l++;
	}
	return (dest);
}
