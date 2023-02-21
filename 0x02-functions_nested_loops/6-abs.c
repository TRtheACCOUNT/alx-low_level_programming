#include "main.h"

/**
 * int_abs - Gives the absolute value of a number .
 * @c: input
 * Return: return the absolute value of the input .
 */
int int_abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
