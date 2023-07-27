/**
 * reverse_array - revese the contents of an array
 * @a: array of integers
 * @n: number of elements to swap
 * Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
