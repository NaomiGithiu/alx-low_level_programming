#include <stdio.h>
#include "main.h"
/**
*print_triangle - prints a triangle
*
*@size: is the size of the triangle
*Return: nothing
*/
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for ((j = size - i); j > 0; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			if (i == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
