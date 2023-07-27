/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: pointer to string
*/
char *leet(char *s)
{
	char str[] = {'a', 'e', 'o', 't', 'l'};
	int leet[] = {4, 3, 0, 7, 1};
	int j = 0, i;

	while (s[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[i] == str[i] || s[i] == str[i] - 32)
				s[i] = leet[i];
		}
		j++;
	}
	return (s);
}
