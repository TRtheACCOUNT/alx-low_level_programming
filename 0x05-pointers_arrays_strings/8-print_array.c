#include "main.h"
#include <stdio.h>
/**
* print_array - print integers.
* @a: array to input.
* @n: the lenght of the input.
*/

void print_array(int *a, int n)
{
	int len;
	
	for (len = 0; len < n; len++)
	{
		printf("%d", a[len]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
