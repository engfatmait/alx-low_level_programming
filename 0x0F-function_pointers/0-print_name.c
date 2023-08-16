#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: input name
 * @f: a pointer to function
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
