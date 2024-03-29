#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets value of bit to 1 at a given index
 * @n: pointer to the value to change
 * @index: index
 * Return: 1 if it is a successful, -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	*n |= (1UL << index);
	return (1);
}
