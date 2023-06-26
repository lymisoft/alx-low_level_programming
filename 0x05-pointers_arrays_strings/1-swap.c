#include "main.h"

/**
 * swap_int-Swaps the values of 2 integers.
 * @a:First ineger to be swapped.
 * @b:second integer to be swapped.
 *
 * Return:void.
 */

void swap_int(int *a, int *b)
{
	int l = *a;
	*a = *b;
	*b = l;

}
