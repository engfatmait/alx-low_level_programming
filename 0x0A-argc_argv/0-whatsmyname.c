#include <stdio.h>
/**
 * main - prints the name of a program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: always 0 for success
*/
int main(argc __attribute__((unused)), char *argv[])
{
	printf("the name of the program %s\n", argv[0]);
	return (0);
}
