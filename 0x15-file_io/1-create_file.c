#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: string to be written to the file
 * Return: 1 if  success and -1 on failure or error
 */

int create_file(const char *filename, char *text_content)
{
	/* declare variable*/
	int f_open, f_read = 0, f_write;

	if (!filename)
		return (-1);

	f_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f_open == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (f_read = 0; text_content[f_read] != '\0';)
		f_read++;

	f_write = write(f_open, text_content, f_read);
	if (f_write == -1)
		return (-1);

	/*close file*/
	close(f_open);

	return (1);
}
