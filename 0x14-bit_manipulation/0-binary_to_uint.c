#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int len = 0;
	unsigned int num = 0;

	if (!b)
		return (0);

	while (b[len])
		len++;

	for (i = len - 1, j = 1; i >= 0; i--, j *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] & 1)
		num += j;
	}
	return (num);

}
