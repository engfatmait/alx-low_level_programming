#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars,initializes it with a specific char
 * @size: size of the array
 * @c: the character used for intialization
 * Return: null if size = 0 , pointer to the array or null for fail
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
		return (0);
	arr = malloc(size);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);

}
