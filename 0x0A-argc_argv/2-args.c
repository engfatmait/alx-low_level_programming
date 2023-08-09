#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: an integer
*/
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
