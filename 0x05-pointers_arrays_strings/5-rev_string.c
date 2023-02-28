#include "main.h"

/**
* rev_string - Reverses a string
* @s: The string to be modified
*Return: void
*/
void print_rev(char *s)
{
	int c = 0;
	while (s[c] != '\0')
	{
	c++;
	}
	for (c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
