#include "main.h"
/**
* puts2 - print evrey other character.
* @str: string input.
* Return : evrey other character.
*/

void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
	}
	_putchar('\n');
}
