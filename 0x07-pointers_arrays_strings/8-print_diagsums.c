#inlcude "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array which is a square
 */

void print_diagsums(int *a, int size)
	{int i;

unsigned int sum, sum1;

sum = 0;
sum1 = 0;

for (i = 0; i < size; i++)
{
sum += a[(size * i) + i];
sum1 += a[(size * (i + 1)) - (i + 1)];
}

printf("%d, %d\n", sum, sum1);
}
