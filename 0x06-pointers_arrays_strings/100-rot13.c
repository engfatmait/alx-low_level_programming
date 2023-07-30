/**
 * rot13 - encodes a string using rot13.
 * @s: input string
 * Return: pointer to string
*/
char *rot13(char *s)
{
	int i, j = 0;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (s[j] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
		if (s[j] == alph[i])
			s[j] = ((s[i] + 39) % 52);
		}
	j++;
	}
	return (s);
}
