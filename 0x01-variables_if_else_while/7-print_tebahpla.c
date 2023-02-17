/*
 * File: 7-print_tebahpla.c
 * 
 */

#include <stdio.h>

/**
 * Print the lowercase alphabet in reverse.
 *
 * 
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
