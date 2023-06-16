#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, s;

	for (l = 0; l < 100; l++)
	{
		for (s = 0; s < 100; s++)
		{
			if (l < s)
			{
				putchar((l / 10) + 48);
				putchar((l % 10) + 48);
				putchar(' ');
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);
				if (l != 98 || s != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
