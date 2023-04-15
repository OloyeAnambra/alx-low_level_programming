#include "main.h"

/**
 * create_buffer - a function that allocates 1024 bytes on the heap
 * @argument: the argv file for which memory is allocated
 *
 * Return: a pointer to the allocated buffer
 */
char *create_buffer(char *argument)
{
	char *buf;

	buf = malloc(1024 * sizeof(char));
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argument);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - a function which closes file descriptors
 * @fd: the file descriptor to be closed
 */
void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 1 (Success); 97, 98, 99, 100 (Failure)
 */

int main(int argc, char *argv[])
{
	int f_from, f_to, rd, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	rd = read(f_from, buf, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wr = write(f_to, buf, rd);
		if (f_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		rd = read(f_from, buf, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buf);
	close_file(f_from);
	close_file(f_to);
	return (0);
}
