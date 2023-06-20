#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the integer to be worked on
 * Return: value of the last digit of the integer
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	n = -n;

	l = n % 10;

	if (l < 0)
		l = -l;

	_putchar(l + '0');

	return (l);
}
