/*
 * File: 4-print_alphabt.c
 * 
 */

#include <stdio.h>

/**
 * Print the alphabet in lowercase, except for q and e.
 *
 * 
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
