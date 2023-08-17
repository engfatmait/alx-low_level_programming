#include <variadic_functions.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: input string
 * @n: number of args passed
 * Return: nothing
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (separator && i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(args);
}
