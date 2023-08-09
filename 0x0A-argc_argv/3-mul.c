#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiply 2 arguments
 * @argc: number of arguments entered
 * @argv: value of arguments
 * Return: 0 - success
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
