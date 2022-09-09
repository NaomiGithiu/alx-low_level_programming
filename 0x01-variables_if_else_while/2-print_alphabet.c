#include <stdio.h>
/**
 * main fuction prints the alphabets in lowercase
 *
 * return 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
