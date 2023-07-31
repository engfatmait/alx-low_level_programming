#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: input pointer to array
 * @size: input size
 * Return: nothing
*/
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum = sum + a[i][j];
		}
	}
	printf("%d", sum);
}

