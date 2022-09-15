#include "main.h"
/**
*_isdigit - checks for digits from 0 to 9
*
*@c: is the integer that checks for the digits
*Return: 1 or 0
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
