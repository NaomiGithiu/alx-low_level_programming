#include "main.h"
/**
*_isupper - checks for the uppercase character
*
*@c: is the integer used to check for the uppercase character
*Return: 0 or 1 after checking for the uppercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
