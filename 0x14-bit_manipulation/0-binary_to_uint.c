#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: input binary number
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
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
