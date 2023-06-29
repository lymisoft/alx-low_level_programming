#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int l, s, t;

	if (n < 0)
	{
		_putchar(45);
		l = n * -1;
	}
	else
	{
		l = n;
	}

	s = l;
	t = 1;

	while (s > 9)
	{
		s /= 10;
		t *= 10;
	}

	for (; t >= 1; t /= 10)
	{
		_putchar(((l / t) % 10) + 48);
	}
}
