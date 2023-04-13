#include "main.h"

/**
 * append_text_to_file - Append some text to the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to be added to the end of the file.
 *
 * Return: -1 if the function fails or filename is NULL and if the file
 *         does not exist the user lacks write permissions.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wrt, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wrt = write(op, text_content, len);
	if (op == -1 || wrt == -1)
		return (-1);
	close(op);
	return (1);
}
