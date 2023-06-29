#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 *
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int l, s, t;

	if (size <= 0)
		printf("\n");
	else
	{
		for (l = 0; l < size; l += 10)
		{
			printf("%.8x:", l);
			for (s = l; s < l + 10; s++)
			{
				if (s % 2 == 0)
					printf(" ");
				if (s < size)
					printf("%.2x", *(b + s));
				else
					printf("  ");
			}
			printf(" ");
			for (t = l; t < l + 10; t++)
			{
				if (t >= size)
					break;
				if (*(b + t) < 32 || *(b + t) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + t));
			}
			printf("\n");
		}
	}
}
