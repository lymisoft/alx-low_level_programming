#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line
 * @n: the number to start printing from
 */

void print_to_98(int n)
{
	int l, s;

	if (n <= 98)
	{
		for (l = n; l <= 98; l++)
		{
			if (l != 98)
				printf("%d, ", l);
			else if (l == 98)
				printf("%d\n", l);
		}
	} else if (n >= 98)
	{
		for (s = n; s >= 98; s--)
		{
			if (s != 98)
				printf("%d, ", s);
			else if (s == 98)
				printf("%d\n", s);
		}
	}
}
