/**
 * _strcat - concatenates two strings
 * @dest: input string
 * @src: input string
 * Return: always returns a pointer
*/
char *_strcat(char *dest, char *src)
{
	int count = 0, int count1 = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[count1] != '\0')
		dest[count] = src[count1];
	return (dest);
}
