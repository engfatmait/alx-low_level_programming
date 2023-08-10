#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements for the array
 * @size: number of bytes
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(sizeof(size) * nmemb);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < sizeof(size) * nmemb; i++)
		a[i] = 0;
	return (a);
}
