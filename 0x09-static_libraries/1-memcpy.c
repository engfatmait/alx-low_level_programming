/**
 * _memcpy -  copies memory area
 * @dest: pointer to memory area copied to
 * @src: pointer to memory area copy from
 * @n: number of bytes
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
