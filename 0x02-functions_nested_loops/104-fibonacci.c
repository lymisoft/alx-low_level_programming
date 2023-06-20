#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int l;
	unsigned long int beg = 1;
	unsigned long int end = 2;
	unsigned long int s = 1000000000;
	unsigned long int beg1;
	unsigned long int beg2;
	unsigned long int end1;
	unsigned long int end2;

	printf("%lu", beg);

	for (l = 1; l < 91; l++)
	{
		printf(", %lu", end);
		end += beg;
		beg = end - beg;
	}

	beg1 = (beg / s);
	beg2 = (beg % s);
	end1 = (end / s);
	end2 = (end % s);

	for (l = 92; l < 99; ++l)
	{
		printf(", %lu", end1 + (end2 / s));
		printf("%lu", end2 % s);
		end1 = end1 + beg1;
		beg1 = end1 - beg1;
		end2 = end2 + beg2;
		beg2 = end2 - beg2;
	}
	printf("\n");
	return (0);
}
