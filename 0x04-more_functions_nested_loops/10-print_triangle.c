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

	while (size > 0)
	{
		for (i = 1; i < size; i++)
		{
			for (j = 1; j < size; j++)
			{
				if (i >= j)
				{
					_putchar("#");
				}
				else
				{
					_putchar(" ");
				}
			}
			_putchar("\n");
		}
	}
}
