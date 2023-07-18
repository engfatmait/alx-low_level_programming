#include "main.h"
/**
 * print_sign - Shows 1 if the input is +
 * prints 0 if it 0 , -1 if it -.
 *
 * @n: The sign in ASCII code
 *
 * Return: 1 for +. 0 for 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
