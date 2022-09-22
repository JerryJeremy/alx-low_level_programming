#include "main.h"


/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array of integers to be reversed
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;
	int h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
