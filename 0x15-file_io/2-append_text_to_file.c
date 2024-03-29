#include "main.h"

/**
 * append_text_to_file - Appends text at  end of a file.
 * @filename:  the name of the file.
 * @text_content: string to add to the end of file.
 * Return: If the function fails or filename is NULL -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise  1 on sucess.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, r = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (r = 0; text_content[r];)
			r++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, r);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
