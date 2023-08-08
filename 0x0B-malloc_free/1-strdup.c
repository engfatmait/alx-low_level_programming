#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of a string
 * @str: input string
 * Return: NULL if str = NULL or allocation error  pointer to string
**/
char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *newstr;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
		size++;
	size--;
	newstr = malloc(sizeof(*str));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		newstr[i] = str[i];
	return (newstr);
	free(newstr);
}
