#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: a pointer to the text file to be read and printed
 * @letters: the number of letters to be read and printed
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t wr;
	ssize_t rd;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);

	rd = read(fd, buff, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
		return (0);

	free(buff);
	close(fd);
	return (wr);
}
