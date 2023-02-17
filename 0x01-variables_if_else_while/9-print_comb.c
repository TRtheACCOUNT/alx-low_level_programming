/*
 * File: 9-print_comb.c
 * 
 */

#include <stdio.h>

/**
 * Print all possible combinations of single-digit numbers.
 *
 * 
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
