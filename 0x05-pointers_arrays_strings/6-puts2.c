#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: input string.
 * Return: Always 0 .
 */
void puts2(char *str)
{
	int l = 0;

	while (l >= 0)
	{
		if (str[l] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (l % 2 == 0)
			_putchar(str[l]);
		l++;
	}
}
