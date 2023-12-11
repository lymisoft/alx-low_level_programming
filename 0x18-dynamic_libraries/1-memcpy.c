#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int l = n;

	for (; s < l; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
