#include "main.h"
/**
*print_times_table - prints time table
*@n: is the interger that will be used
*
*/
void print_times_table(int n)
{
	int i, j, results;

	if (n != 0 && n < 15)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('0');
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				results = i * j;
				if (results <= 99)
					_putchar(' ');
				if (results >= 100)
				{
					_putchar((results / 100) + '0');
					_putchar((results / 10) % 10 + '0');
				}
				else if (results <= 99 && results >= 10)
				{
					_putchar((results / 10) + '0');
				}
				_putchar((results % 10) + '0');
			}
		_putchar('\n');
		}
	}
}


