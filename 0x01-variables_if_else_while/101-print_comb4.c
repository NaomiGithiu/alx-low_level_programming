#include <stdio.h>
/**
*main - calls for other functions
*
* Return: 0
*/
int main(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
	for (j = 1; j < 10; j++)
	{
		for (k = 2; k < 100; k++)
		{
		if (i != j && j != k && i < j && j < k)
		{
			putchar(i);
			putchar(j);
			putchar(k);
			if (i != 7 || j != 8 || k != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}
}
putchar('\n');
return (0);
}
