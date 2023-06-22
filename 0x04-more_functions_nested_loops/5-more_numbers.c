#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int i, l;

	for (i = 0; i < 10; i++)
	{
		for (l = 0; l < 15; l++)
		{
			if (l >= 10)
				_putchar((l / 10) + 48);
			_putchar((l % 10) + 48);
		}
		_putchar('\n');
	}
}
