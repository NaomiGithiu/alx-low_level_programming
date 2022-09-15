#include "main.h"
/**
*print_line - prints a straight line
*@n: is the number of times the character - will be printed
*Return: 0
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('-');
		_putchar("\\n");
	}
}
