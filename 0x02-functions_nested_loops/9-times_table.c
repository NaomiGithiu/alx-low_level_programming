#include "main.h"
/**
*times_table - prints the time table of 9
*
*Return: 0
*/
void times_table(void)
{
	int n;
	int i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(n * i);
		}
		_putchar('\n');
	}
}

