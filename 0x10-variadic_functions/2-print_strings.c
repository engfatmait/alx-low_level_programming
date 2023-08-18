#include "variadic_functions.h"
/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *argstr;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		argstr = va_arg(str, char*);
		if (argstr == NULL)
			printf("(nil)");
		printf("%s", argstr);
		if (separator && i < n - 1)
			printf("%s", separator);


	}
	printf("\n");
	va_end(str);
}
