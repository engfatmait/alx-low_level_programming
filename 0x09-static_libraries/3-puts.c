#include "main.h"
/**
 * _puts - function prints string to stdout
 * @str: input string
 * Return: nothing
*/
void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');

}
