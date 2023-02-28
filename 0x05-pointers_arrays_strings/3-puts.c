#include "main.h"

/**
* _puts - print the string .
* @str: string input.
* Return : the string
*/

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
