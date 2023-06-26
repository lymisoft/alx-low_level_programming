#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: string to be printed.
 * Return: Always 0 .
 */
void _puts(char *str)
{
	int l = 0;

	while (l >= 0)
	{
		if (str[l] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[l]);
		l++;
	}
}
