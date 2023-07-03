#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, l;

	sum1 = 0;
	sum2 = 0;

	for (l = 0; l < size; l++)
	{
		sum1 = sum1 + a[l * size + l];
	}
	for (l = size - 1; l >= 0; l--)
	{
		sum2 += a[l * size + (size - l - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
