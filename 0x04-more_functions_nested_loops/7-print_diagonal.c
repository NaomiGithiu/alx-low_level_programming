#include "main.h"
/**
*print_diagonal - draws a diagnol line
*@n: is the number of times \ will be printed
*
*Return: nothing
*/
void print_diagonal(int n)
{
	int len, space;

	if(n > 0)
	{
		for (len =o; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (len == (n - 1))
			{
				continue
			}
			_putchar('\n');
		}
	}
	putchar('\n');
}
