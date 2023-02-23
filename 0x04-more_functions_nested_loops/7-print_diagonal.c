
#include "main.h"

/**
 * print_diagonal - print a line .
 * @n: input .
 * Return: 0 .
 */
void print_diagonal(int n);
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (empty = 1; empty <= times; empty++)
			{
				_putchar(' ');
			}
			_putchar(92);
		}
	}
	_putchar('\n');
}
