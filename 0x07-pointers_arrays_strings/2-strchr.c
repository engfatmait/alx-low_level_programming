/**
 * _strchr -  locates a character in a string
 * @s: input string
 * @c: input character to locate
 * Return: pointer to first occurrence of c
**/
char *_strchr(char *s, char c)
{
	int i, count = 0;

	while (s[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		else
		return ('\0');
	}
}
