#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first input string
 * @s2: second input string
 * Return: pointer to a string
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, s, s3;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	cat = malloc(sizeof(char) * (i + j + 1));
	if (cat == NULL)
		return (NULL);
	for (s = 0; s <= i; s++)
		cat[s] = s1[i];
	for (s3 = 0; s3 < j + 1; s3++)
	{
		cat[i] = s2[s3];
		i++;
	}
	return (cat);
}
