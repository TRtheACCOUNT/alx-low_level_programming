#include "main.h"

/**
 * _strspn - counts the number of bytes of a string
 * @s: string
 * @accept: string
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, j, l;

	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				j++;
				l = 1;
			}
		}

		if (l == 0)
			return (j);
	}

	return (j);
}
