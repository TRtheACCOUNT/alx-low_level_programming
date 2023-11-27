#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print .
 * @filename: text file name
 * @letters: number of letters to be read
 * Return: w or 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	
	ssize_t txt, wrt, rd;
char *num;

	txt = open(filename, O_RDONLY);
	if (txt == -1)
		return (0);
	num = malloc(sizeof(char) * letters);
	rd = read(txt, num, letters);
	wrt = write(STDOUT_FILENO, num, rd);

	free(num);
	close(txt);
	return (wrt);
}
