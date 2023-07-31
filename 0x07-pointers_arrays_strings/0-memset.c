/**
 * _memset - fills memory with a constant byte.
 * @s: input pointer
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
