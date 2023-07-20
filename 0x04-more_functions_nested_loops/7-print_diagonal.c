#include "main.h"
/**
 * print_diagonal - print the diagonal line to screen
 * @n: integer number of times
 * Return no
*/
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
	_putchar('\n');
}
