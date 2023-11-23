#include "main.h"

/**
 * print_binary - gets binary number of a decimal number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	int j, cnt = 0;
	unsigned long int crnt;

	for (i = 63; i >= 0; i--)
	{
		crnt = n >> j;

		if (crnt & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
