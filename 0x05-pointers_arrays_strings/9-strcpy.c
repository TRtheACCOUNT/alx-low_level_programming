#include "main.h"

/**
*_strcpy - copy and store a string.
* @src: string input.
* @dest: the destination of the string .
* Return : evrey half a string.
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
