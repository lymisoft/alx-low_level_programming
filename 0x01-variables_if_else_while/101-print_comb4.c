#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, s, t;

	for (l = 48; l < 58; l++)
	{
		for (s = 49; s < 58; s++)
		{
			for (t = 50; t < 58; t++)
			{
				if (t > s && s > l)
				{
					putchar(l);
					putchar(s);
					putchar(t);
					if (l != 55 || s != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
