#include "main.h"

/**
 * clear_bit - sets 0 as the value of a bit  at an index
 * @n: A pointer to the value to be set to 0
 * @index: The binary index to be set to be cleared
 *
 * Return: 1 if it is a success and -1 for  error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Determine range of the index if its within the required*/

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);


	*n &= ~(1UL << index);

	return (1);
}
