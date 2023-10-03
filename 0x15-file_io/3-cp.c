#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int ly);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @ly: The file descriptor to be closed.
 */
void close_file(int ly)
{
	int l;

	l = close(ly);

	if (l == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close ly %d\n", ly);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int beg, end, s, t;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	beg = open(argv[1], O_RDONLY);
	s = read(beg, buffer, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (beg == -1 || s == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		t = write(end, buffer, s);
		if (end == -1 || t == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		s = read(beg, buffer, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);

	} while (s > 0);

	free(buffer);
	close_file(beg);
	close_file(end);

	return (0);
}
