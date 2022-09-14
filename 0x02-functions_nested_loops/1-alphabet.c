#include "main.h"
/**
*
*
* print_alphabet - prints the alphabets followed by a new line
*Return: 0
*/
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
putchar('\n');
}
