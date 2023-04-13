#include "main.h"

/**
 * create_file - Creates a new file.
 * @filename: pointer to the name of the file to be created.
 * @text_content: pointer to a string to be written into the file.
 *
 * Return: -1 if the function fails. and
 *         1 Otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int wr, fide, lengt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengt = 0; text_content[lengt];)
			lengt++;
	}

	fide = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fide, text_content, lengt);

	if (fide == -1 || wr == -1)
		return (-1);

	close(fide);

	return (1);
}
