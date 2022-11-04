#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	int reader = 0;
	int output = 0;
	char *buffer;

	if (filename == NULL)
	return (0);
	
	buffer = malloc(letters);
	if (buffer == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	reader = read(fd, buffer, letter);
	if (reader == -1)
	{
		free(buffer);
		return (0);
	}

	output = write(STDOUT_FILENO, buffer, reader);
	if (output == -1 || output != reader)
	{
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (output);
}
