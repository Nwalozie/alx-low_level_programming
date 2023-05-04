#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - Converts a decimal to binary.
 * @n: The number to evaluate.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
	}
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
