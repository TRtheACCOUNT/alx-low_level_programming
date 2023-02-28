#include "main.h"

/**
* _strlen - gives the length of a string .
* @s: string input.
* Return:the length of the string
*/

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
