#include "main.h"
/**
*_islower - checks if a character is lowercase or not
*@c: is the int we will use for the argument of the function
* Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}