#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int l;
	int s;

	for (l = 0; l < n--; l++)
	{
		s = a[l];
		a[l] = a[n];
		a[n] = s;
	}
}
