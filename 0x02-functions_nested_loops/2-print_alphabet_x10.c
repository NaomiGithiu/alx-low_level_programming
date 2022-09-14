#include "main.h"
/**
*print_alphabet_x10 - prints abc... ten times
*
* Return: 0
*/
void print_alphabet_x10(void)
{
	char c;

	int i;
	for (c = 'a'; c <= 'z'; c++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(c);
		}
	}
putchar('\n');
}
