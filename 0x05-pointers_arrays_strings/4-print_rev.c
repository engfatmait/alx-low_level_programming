#include "main.h"
/**
 * print_rev - function prints stringin reverse
 * @s: input string
 * Return: nothing
*/
void print_rev(char *s)
{
	int len, i = 0;

	while (*(s + len) != '\0')
		len++;
	i = len;
	while (i <= len)
	{
		if (*(s + i) == '\0')
			continue;
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');

}
