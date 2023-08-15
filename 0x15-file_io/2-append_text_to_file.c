#include "main.h"

/**
 * append_text_to_file - Append a given string to the end of a specified file
 * @filename: Pointer to the name of the target file
 * @text_content: The content to be added at the end of the file
 *
 * Return: Returns -1 if the function fails, filename is NULL,
 *         or the file doesn't exist with write permissions
 *         Returns 1 on successful appending to the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

