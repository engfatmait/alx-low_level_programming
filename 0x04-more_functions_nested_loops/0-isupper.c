#include "main.h"
/**
 * _isupper - function to test the upper case character
 * @c : the ascii value of the character
 *
 * Return: 1 if c is upper 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar(c);
		_putchar(': 1');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(': 0');
		return (0);
	}
	_putchar('/n');

}
