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

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	return (sum);

}
