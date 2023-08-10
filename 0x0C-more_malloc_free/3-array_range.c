#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to integer
*/
int *array_range(int min, int max)
{
	int *p;
	unsigned int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
