#include "main.h"
/**
* _pow_recursion - returns x raise to y
* @x: integer
* @y: integer
* Return: x raise to y
*/
int _pow_recursion(int x, int y)
{
	if (x == 1 || y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	return (_pow_recursion(x, y));
}
