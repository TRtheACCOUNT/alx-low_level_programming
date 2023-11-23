#include "main.h"

/**
 * print_binary - gets binary number of a decimal number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
	print_binary(n >> 1);
	}

	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}


}
