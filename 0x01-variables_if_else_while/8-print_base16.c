#include <stdio.h>
/**
* main - calls other functions
*
* Return: 0
*/
int main(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
{
	putchar(ch);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
