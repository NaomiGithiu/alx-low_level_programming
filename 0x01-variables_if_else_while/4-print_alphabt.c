#include <stdio.h>
/**
*main - prints if the number is positive, negative or zero
*description: using the main function
*this program prints "alphabets in lowercase excluding e and q"
*return 0
*/
int main(0)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch !='q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
