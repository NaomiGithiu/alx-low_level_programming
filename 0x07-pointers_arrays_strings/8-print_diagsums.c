#include <stdio.h>
#include "main.h"
/**
*print_diagsums - print_diagsums
* @a: int
* @size: int
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[(size * x) + x];
		sum2 += a[(size * (x + 1)) - (x + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
