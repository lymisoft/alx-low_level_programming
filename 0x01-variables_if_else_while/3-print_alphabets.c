#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char l;
	char s;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (s = 'A'; s <= 'Z'; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
