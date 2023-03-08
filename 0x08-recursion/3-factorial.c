#include "main.h"

/**
 * factorial - return the factoral of a number
 * @n: number
 * Return: 1 or -1 or the factoral
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
