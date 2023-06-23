#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int l;

	if (n < 0)
	{
		l = -n;
		_putchar('-');
	} else
	{
		l = n;
	}

	if (l / 10)
	{
		print_number(l / 10);
	}

	_putchar((l % 10) + '0');
}
