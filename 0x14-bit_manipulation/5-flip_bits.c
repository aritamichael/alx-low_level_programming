#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - counts number of bits to be flipped to change to another number
 * @n: the original number
 * @m: the second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comparator = n ^ m;
	unsigned int count = 0;

	while (comparator)
	{
		count = count + (comparator & 1);
		comparator >>= 1;
	}
	return (count);
}
