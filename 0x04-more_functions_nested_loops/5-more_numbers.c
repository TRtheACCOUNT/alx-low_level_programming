#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14 then a new line
 * Return: Always 0
 */
void more_numbers(void)
{
	int i = 1;
	int n;
	int n1;
	int n2;

	do

	{
		for (n = 0; n <= 14; n++)

		{
			n1 = n / 10;
			n2 = n % 10;

			if (n1 > 0)

			{
				_putchar('0' + n1);
			}
			_putchar('0' + n2);
		}
		_putchar('\n');
		i++;
	} while (i <= 10);
}
