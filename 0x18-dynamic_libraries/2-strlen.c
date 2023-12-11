#include "main.h"
/**
 *_strlen - returns the length of a string.
 *@s:String pointer
 *Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != 0)
	{
		l++;
	}
	return (l);
}
