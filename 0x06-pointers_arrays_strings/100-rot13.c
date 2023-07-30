/**
 * rot13 - encodes a string using rot13.
 * @s: input string
 * Return: pointer to string
*/
char *rot13(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if((s[j] >= 97 && s[j] <= 122) || (s[j] >= 65 && s[j] <= 90))
			s[j] = s[j] + 13;
	j++;
	}
	return (s);
}
