#include "main.h"
/**
* _puts_recursion - prints a string
* @s: character
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*S == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	 _puts_recursion(s + 1);
}
