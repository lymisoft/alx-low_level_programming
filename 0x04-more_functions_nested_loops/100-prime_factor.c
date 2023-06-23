#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, lpf;

	n = 612852475143;
	for (lpf = 2; lpf <= n; lpf++)
	{
		if (n % lpf == 0)
		{
			n /= lpf;
			lpf--;
		}

	}
	printf("%ld\n", lpf);
	return (0);
}
