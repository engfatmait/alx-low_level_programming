#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: input string
 * Return: nothing
*/
void _puts_recursion(char *s)
{
	int i = 0;

	if (i == 0)
		_putchar(s[0]);
	else if (s[i] == '\0')
		_putchar('\n');
	_puts_recursion(*s(i + 1));

}
