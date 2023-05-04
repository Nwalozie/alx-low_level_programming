#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number.
 * @index: index to set the bit to 0.
 *
 * Return: 1 if success, -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);

	*n = *n & ~(1ul << index);

	return (1);
}
