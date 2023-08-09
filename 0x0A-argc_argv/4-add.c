#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 - success
*/
int main(int argc, char *argv[])
{
	int i;
	long int sum = 0;

	if (argc == 0)
		printf("%d\n", 0);
	for (i = 1; i < argc; i++)
	{
		if (atol(argv[i]) <= 0 || !isdigit(atol(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atol(argv[i]);
		}
	}
	printf("%ld\n", sum);
	return (0);
}
