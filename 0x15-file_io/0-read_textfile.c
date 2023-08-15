#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Print a specified number of letters from
 * a text file to the standard output
 * @filename: The name of the text file to be read
 * @letters: The number of letters to be read and printed
 * Return: Returns the actual number of bytes read and printed (w)
 *         Returns 0 if the function fails or if the filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
