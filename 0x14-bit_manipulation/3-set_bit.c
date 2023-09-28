#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: input number
 * @index: input index of number
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > (8 * sizeof(n)))
			return (-1);
	bit = 1 << index;
	*n = (*n | bit);
	return (1);
}
