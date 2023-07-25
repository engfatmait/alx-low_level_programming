/**
 * _atoi -  function converts a string to integer
 * @s: input string
 * Return: always integer
*/
int _atoi(char *s)
{
	int i, str_int = 0;
	int len;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (; i <= len; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
			str_int = s[i] - 48;
		return (0);
	}
	return (str_int);
}
