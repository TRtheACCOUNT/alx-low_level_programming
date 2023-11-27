#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @src: file_from.
 * @dest: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int src, int dst, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dst == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src, dst, err;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp src dst");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	dst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(src, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(dst, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err = close(src);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err = close(dst);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
