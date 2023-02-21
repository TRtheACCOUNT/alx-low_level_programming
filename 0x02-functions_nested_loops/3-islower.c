#include "main.h"

/**
 * _islower - Check if the letter is lowercase .
 * Return: 1 if c is lowercase, otherwise 0 .
 * @c: letter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
