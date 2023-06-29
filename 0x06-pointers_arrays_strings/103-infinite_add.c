#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l = 0, s = 0, t, u, v, w, sum = 0;

	while (*(n1 + l) != '\0')
		l++;
	while (*(n2 + s) != '\0')
		s++;
	if (l >= s)
		u = l;
	else
		u = s;
	if (size_r <= u + 1)
		return (0);
	r[u + 1] = '\0';
	l--, s--, size_r--;
	v = *(n1 + l) - 48, w = *(n2 + s) - 48;
	while (u >= 0)
	{
		t = v + w + sum;
		if (t >= 10)
			sum = t / 10;
		else
			sum = 0;
		if (t > 0)
		*(r + u) = (t % 10) + 48;
		else
			*(r + u) = '0';
		if (l > 0)
			l--, v = *(n1 + l) - 48;
		else
			v = 0;
		if (s > 0)
			s--, w = *(n2 + s) - 48;
		else
			w = 0;
		u--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
