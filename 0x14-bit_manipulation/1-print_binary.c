#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints a  binary instead of number
 * @n: number to be changed  into binary form
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	/*Print binary in relation to ascii 0*/
	_putchar((n & 1) + '0');

}
