#include <stdio.h>
/**
*main - calls other functions
*
*Return: 0
*/
int main(void)
{
int i, j;
for (i = 0; ch < 10; ch++)
{
	for (j = 1; j < 10; j++)
	{
		if (i != j && i < j)
		{
			putchar(i);
			putchar(j);
			if (i != 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
