#include "main.h"

/**
 * print_binary - gets binary number of a decimal number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(n) *8, cnt = 0;

	while (i)
	{
		if (n & 1L << --i)
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
