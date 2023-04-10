#include "main.h"
#include <stdlib.h>

/**
 * get_bit - give the value of a bit at a given index
 * @n: value of number whose binary is to be given
 * @index: index
 * Return: value of bit or error for -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
		return ((n >> index) & 1);
}
