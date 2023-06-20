#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */

int main(void)
{
	int l, sum = 0;

	for (l = 0; l < 1024; l++)
	{
		if ((l % 3) == 0 || (l % 5) == 0)
			sum += l;
	}

	printf("%d\n", sum);

	return (0);
}
