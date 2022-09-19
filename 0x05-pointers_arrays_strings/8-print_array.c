#include <stdio.h>
#include "main.h"
/**
*print_array - prints n elements of an array
*
*@a: is the array
*@n: is the number of elements
*Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d, ", a[i]);
	}
	_putchar(10);
	_putchar('\n');
}
