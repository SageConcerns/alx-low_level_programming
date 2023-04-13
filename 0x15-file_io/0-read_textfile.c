#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters read
 * Return: w- the actual number of bytes that was read and printed
 *        0 if the function fails or the filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t x;
	ssize_t tex;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	tex = read(fd, buff, letters);
	x = write(STDOUT_FILENO, buff, tex);

	free(buff);
	close(fd);
	return (x);
}
