#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int l, s;

	l = 0;

	while (l < 24)
	{
		s = 0;
		while (s < 60)
		{
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
			s++;
		}
		l++;
	}
}
