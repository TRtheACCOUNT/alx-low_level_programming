#include "main.h"

/**
 * print_last_digit - Gives the last digit of a number .
 * @c: input
 * Return: return the last digite of a number .
 */
int print_last_digit(int c)
{
	int pld;

	pld = (c % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
