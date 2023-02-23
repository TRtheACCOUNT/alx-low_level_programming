#include "main.h"

/**
 * print_most_numbers - from 0 to 9 with the exception 2 and 4 .
 * Return: from 0 to 9 with the exception of 2 and 4 .
 */
void print_most_numbers(void);
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
