#include "main.h"
/**
*_isupper - checks for the upper case character
*
*@c: is the integer used to check for the uppercase character
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
