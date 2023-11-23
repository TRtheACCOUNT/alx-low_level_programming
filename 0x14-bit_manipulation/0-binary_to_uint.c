/**
 * binary_to_uint - from binary number to unsigned int
 * @b: a binary number
* Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int j = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		j = 2 * j + (b[j] - '0');
	}

	return (j);
}
