#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int l = 0;

	while (s[l])
	{
		if (s[l] < '0' || s[l] > '9')
			return (0);
		l++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int lym1, lym2, lym, l, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	lym1 = _strlen(s1);
	lym2 = _strlen(s2);
	lym = lym1 + lym2 + 1;
	result = malloc(sizeof(int) * lym);
	if (!result)
		return (1);
	for (l = 0; l <= lym1 + lym2; l++)
		result[l] = 0;
	for (lym1 = lym1 - 1; lym1 >= 0; lym1--)
	{
		digit1 = s1[lym1] - '0';
		carry = 0;
		for (lym2 = _strlen(s2) - 1; lym2 >= 0; lym2--)
		{
			digit2 = s2[lym2] - '0';
			carry += result[lym1 + lym2 + 1] + (digit1 * digit2);
			result[lym1 + lym2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[lym1 + lym2 + 1] += carry;
	}
	for (l = 0; l < lym - 1; l++)
	{
		if (result[l])
			a = 1;
		if (a)
			_putchar(result[l] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
