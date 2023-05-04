#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - Returns the value of a bit.
 * @n: The number.
 * @index: The index.
 *
 * Return: The value of the bit at index or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
