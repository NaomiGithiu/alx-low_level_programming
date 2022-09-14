#include <stdio.h>
/**
*main - calls for other functions
*
* print_alphabet(void): prints the alphabets followed by a new line
*Return: 0
*/
int main(void)
{
void print_alphabet(void);
char c;
print_alphabet()
{
for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
putchar('\n');
}
return (0);
}
