#include <stdio.h>
/**
*main prints alphabets in lowercase and then in upper case
*
*this program prints all the alphabets in bot lowercase and upper case
*return 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar (ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar (ch);
}
putchar ('\n');
return (0);
}
