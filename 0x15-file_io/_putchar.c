#include <unistd.h>

/**
 * _putchar - Writes character c to the stdout
 * @c: The chacter to be printed
 *
 * Return: 1 when success, -1 on error or fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
