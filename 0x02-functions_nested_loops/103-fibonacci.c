#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int l;
	unsigned long int s, t, next, sum;

	s = 1;
	t = 2;
	sum = 0;

	for (l = 1; l <= 33; ++l)
	{
		if (s < 4000000 && (s % 2) == 0)
		{
			sum = sum + s;
		}
		next = s + t;
		s = t;
		t = next;
	}

	printf("%lu\n", sum);

	return (0);
}
