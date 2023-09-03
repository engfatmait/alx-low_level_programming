#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: input number
 * @index: the index of the bit
 * Return:  value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	for (bit = 63; bit > 0; n >>= 1, bit++)
	{
		if (index == bit)
			return (n & 1);
	}
	return (-1);
}
