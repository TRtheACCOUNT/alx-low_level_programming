#include "main.h"

/**
 * get_bit - returns a bit in a decimal number
 * @n: number to search
 * @index: bit index
* Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int vl;

	if (index > 63)
		return (-1);

	vl = (n >> index) & 1;

	return (vl);
}
