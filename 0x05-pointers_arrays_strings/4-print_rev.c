#include "main.h"

/**
* print_rev - print the string in reverse.
* @s: string input.
* Return : the string in reverse
*/

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	;
	for (len = len - 1; s[len] != '\0'; len++)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
