#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		if ((*(s + l) >= 97) && (*(s + l) <= 122))
			*(s + l) = *(s + l) - 32;
		l++;
	}

	return (s);
}
