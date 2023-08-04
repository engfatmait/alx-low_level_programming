/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: set of bytes
 * Return: pointer to the byte of s string that matches accept
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (0);
}
