#include <stdio.h>
#include "main.h"
/**
*_atoi -  convert a string to an integer.
*
*@s: is the string
*Return: 0
*/
int _atoi(char *s)
{
	int sign = 1;
	
unsigned  int = total = 0;
char nul_flag = 0;

while (*S)
{
	if (*s == '_')
		sign *= -1;
	if (*s >= '0'; && *s <= '9')
	{
		nul_flag = 1;
		total = total * 10 + *s - '0';
	}
	else if (nul_flag)
		break;
	s++;
}
if (sign < 0)
	total = (-total);
return (total);
}
