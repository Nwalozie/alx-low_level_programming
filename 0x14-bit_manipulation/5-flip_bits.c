#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count_num = 0;
	unsigned long int current_num;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current_num = exclusive >> a;
		if (current_num & 1)
			count_num++;
	}

	return (count_num);
}

