#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int l, s, t;

	for (l = 0; l < 10; l++)
	{
		for (s = 0; s < 10; s++)
		{
			t = s * l;
			if (s == 0)
			{
				_putchar(t + '0');
			}

			if (t < 10 && s != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(t + '0');
			} else if (t >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
