#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * countbits - returns the number of bits to flip.
 * @n: The value to check.
 *
 * Return: The number of bits to flip.
 */
unsigned int countbits(unsigned long int n)
{
	unsigned int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n: The first value.
 * @m: The second value.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countbits(n ^ m));
}
