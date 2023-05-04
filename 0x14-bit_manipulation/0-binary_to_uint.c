#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y.
 *         If y is lower than 0, return -1.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1 / _pow_recursion(x, -y));
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string to evaluate.
 *
 * Return: The length of the string.
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The binary number as a string.
 *
 * Return: The converted number, or 0 if b is NULL or contains non-binary chars.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int len = 0, i = 0, p = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			sum += _pow_recursion(2, p);
		p++;
	}

	return (sum);
}
