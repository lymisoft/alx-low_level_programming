#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;
	char ls;

	for (l = 0; l < 10; l++)
		putchar((l % 10) + '0');

	for (ls = 'a'; ls <= 'f'; ls++)
		putchar(ls);
	putchar('\n');
	return (0);
}
