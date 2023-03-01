#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: is the array
 * @n: size of array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i = n - 1;

	while (i >= 0)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
}
