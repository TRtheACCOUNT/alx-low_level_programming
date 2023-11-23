#include "main.h"

/**
 * clear_bit - put 0 at a certain index
 * @n: pointer to the bit
 * @index: index of the bit to set to 0
 *
 * Return: 1 or -1 
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
