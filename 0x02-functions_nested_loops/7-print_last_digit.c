#include "main.c"
/**
*print_last_digit - prints the last digit of a number
*@i: is the int used to determine the last int
*Return: the last digit
*/
int print_last_digit(int i)
{
	int last_digit = i % 10;

	if (last_digit < 0)
	{
		_putchar(last_digit * -1);
		return (last_digit);
	}
	else
	{
		_putchar(last_
