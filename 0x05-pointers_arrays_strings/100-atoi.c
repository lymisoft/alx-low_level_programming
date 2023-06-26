#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int l, x, t, length, y, digit;

	l = 0;
	x = 0;
	t = 0;
	length = 0;
	y = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (l < length && y == 0)
	{
		if (s[l] == '-')
			++x;

		if (s[l] >= '0' && s[l] <= '9')
		{
			digit = s[l] - '0';
			if (x % 2)
				digit = -digit;
			t = t * 10 + digit;
			y = 1;
			if (s[l + 1] < '0' || s[l + 1] > '9')
				break;
			y = 0;
		}
		l++;
	}

	if (y == 0)
		return (0);

	return (t);
}
