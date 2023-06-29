#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int t = 0, l;
	int lc[] = {97, 101, 111, 116, 108};
	int uc[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(s + t) != '\0')
	{
		for (l = 0; l < 5; l++)
		{
			if (*(s + t) == lc[l] || *(s + t) == uc[l])
			{
				*(s + t) = nums[l];
				break;
			}
		}
	t++;
	}

	return (s);
}
