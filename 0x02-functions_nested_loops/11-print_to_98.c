#include "main.h"

/**
 * print_to_98 - Gives the numbers from n to 98 .
 * @n: input .
 * Return: return the numbers from n to 98 .
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(", ");
			}
			n--;
		}
	}
	else
	{
		_putchar("98");
	}
	printf("\n");
}
