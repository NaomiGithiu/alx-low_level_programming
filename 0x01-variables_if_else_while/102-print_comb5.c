#include <stdio.h>
/**
*main - calls other functions
*
* Return: 0
*/
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
	for (j = 1; j < 100; j++)
	{
		if (i != j && i < j)
		{
			putchar((i / 10) + 48);
		       putchar((i % 10) + 48);
	       putchar(' ');
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (i != 98 || j != 99)
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