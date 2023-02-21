#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * Return: 1 or 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
