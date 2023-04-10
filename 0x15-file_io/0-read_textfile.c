#include <stdio.h>
#include "main.h"


/**
 * read_textfile - reads a file and prints out the number of letters STDOUT
 * @letters: number of letters to be read in textfile
 * @filename: the file to be read
 * Return: number of letters or if fail 0 or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t f_read;
	ssize_t total = 0;
	char c;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	while (letters-- > 0 && (f_read = read(fd, &c, 1)) > 0)
	{
		if (write(STDOUT_FILENO, &c, 1) != 1)
		{
			close(fd);

			return (total);
		}
		total = total + f_read;
	}
	close(fd);
	return (total);
}

