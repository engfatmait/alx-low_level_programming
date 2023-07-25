/**
 * _atoi -  function converts a string to integer
 * @s: input string
 * Return: always integer
*/
int _atoi(char *s)
{
	int i = 0;
	int len, str_int;

	while (s[i] != '\0')
		len++;
	for (; i <= len; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
			str_int = s[i] - 48;
		return (0);
	}
	return (str_int);
}
