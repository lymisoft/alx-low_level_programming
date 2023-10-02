#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int y, l, lym = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lym = 0; text_content[lym];)
			lym++;
	}

	y = open(filename, O_WRONLY | O_APPEND);
	l = write(y, text_content, lym);

	if (y == -1 || l == -1)
		return (-1);

	close(y);

	return (1);
}
