#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary number
 *
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int bit_value = 1;
	int index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
		index++;

	index--;

	for (; index >= 0; index--)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		if (b[index] == '1')
			number += bit_value;

		bit_value *= 2;
	}

	return (number);
}
