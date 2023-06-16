#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, s = '0', t;

	for (l = '0'; l <= '9'; l++)
	{
		for (t = s; t <= '9'; t++)
		{
			if (l != t)
			{
				putchar(l);
				putchar(t);
			}
			if (l == t)
			{
				continue;
			}
			if (l == '8' && t == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		s++;
	}
	putchar('\n');
	return (0);
}
