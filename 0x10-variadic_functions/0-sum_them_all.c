#include <stdarg.h>
/**
 * sum_them_all - function that all its arguments
 * @n: num of arguments passed
 * Return: integer (the sum)
**/
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += var_arg(args, int);
	return (sum);

}
