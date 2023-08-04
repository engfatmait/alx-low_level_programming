/**
 * _atoi -  function converts a string to integer
 * @s: input string
 * Return: always integer
*/
int _atoi(char *s)
{
	int i, str_int = 0;
	int len, j;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (j = 0; j <= len; j++)
	{
		if (s[j] >= 48 && s[j] <= 57)
			str_int = s[j] - 48;
		return (0);
	}
	return (str_int);
}
