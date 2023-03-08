#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals(task7)
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int p;

	unsigned int add, add1;

	add = 0;
	add1 = 0;

	for (p = 0; p < size; p++)
	{
		add += a[(size * p) + p];
		add1 += a[(size * (p + 1)) - (p + 1)];
	}

	printf("%d, %d\n", add, add1);
}
