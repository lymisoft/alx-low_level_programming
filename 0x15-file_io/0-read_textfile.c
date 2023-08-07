#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *lym;
	ssize_t ly;
	ssize_t l;
	ssize_t y;

	ly = open(filename, O_RDONLY);
	if (ly == -1)
		return (0);
	lym = malloc(sizeof(char) * letters);
	y = read(ly, lym, letters);
	l = write(STDOUT_FILENO, lym, y);

	free(lym);
	close(ly);
	return (l);
}
