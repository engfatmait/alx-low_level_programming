#include "main.h"

/**
 * _islower - checks for lower case charater
 * @c: the ascii value of the character
 *
 * Return: On success 1.
 * other, 0 is returned.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');

}
