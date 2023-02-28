#include "main.h"

/**
* _strlen - gives the length of a string .
* @s: string input.
* Return:the length of the string
*/

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0' ; len++)
	;
	return (len);
}
