#include "main.h"
/**
 * print_line - print the line to screen
 * @n: integer number of times
 * Return no
*/
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
		if (n > 0)
			_putchar(95);
		_putchar('\n');
}
