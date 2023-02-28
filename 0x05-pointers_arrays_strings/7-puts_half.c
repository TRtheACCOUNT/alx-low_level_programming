#include "main.h"
/**
* puts_half - print half of a string.
* @str: string input.
* Return : evrey half a string.
*/

void puts_half(char *str)
{
	int len;
	int i;

	for (len = 0; str[len] != '\0'; len++)
	;
	i = len / 2;
	if (len % 2 == 1)
	{
		i++;
	}

	while (i < len)
	{
		_putchar(str[len]);
		i++;
	}
	_putchar('\n');
}
