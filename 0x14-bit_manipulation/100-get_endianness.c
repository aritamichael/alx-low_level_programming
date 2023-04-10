#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - determines the endianness
 * Return: 0 for big endian, 1 for little
 **/

int get_endianness(void)
{
	unsigned int n = 1;
	char *m = (char *)&n;

	if (*m)
		return (1);
	else
		return (0);
}
