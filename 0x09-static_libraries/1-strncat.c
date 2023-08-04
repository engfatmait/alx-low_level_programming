/**
 * _strncat - concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: number of bytes
 * Return: always returns a pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count1 = 0;

	while (dest[count] != '\0')
	{
	count++;
	}
	while (src[count1] != '\0')
	{
		if (count1 >= n)
			break;
		dest[count] = src[count1];
		count1++;
		count++;
	}
	return (dest);
}
