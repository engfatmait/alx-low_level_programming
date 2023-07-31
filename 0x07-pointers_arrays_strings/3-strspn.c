/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: sub string to find
 * Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, count = 0, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] < '\0'; j++)
			if (accept[j] == s[i])
				count++;
	}
	return (count);
}
