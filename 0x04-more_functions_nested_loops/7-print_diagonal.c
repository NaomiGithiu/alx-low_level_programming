#include "main.h"
/**
*print_diagonal - draws a diagnol line
*@n: is the number of times \ will be printed
*
*Return: nothing
*/
void print_diagonal(int n)
{
	for (n = 1; n < 10; n++)
	{
		_putchar('\\');
		_putchar('\n');
		_putchar(' ');
		_putchar("\\n");
	}
}
