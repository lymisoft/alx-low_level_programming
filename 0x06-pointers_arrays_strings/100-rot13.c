#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int l, t;

	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *z = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (l = 0; s[l] != '\0'; l++)
	{
		for (t = 0; a[t] != '\0'; t++)
		{
			if (s[l] == a[t])
			{
				s[l] = z[t];
				break;
			}
		}
	}

	return (s);
}
