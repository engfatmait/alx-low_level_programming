/**
 * _strlen - function that returns length of a string
 * @s: input string
 * Return: an integer
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);


}
