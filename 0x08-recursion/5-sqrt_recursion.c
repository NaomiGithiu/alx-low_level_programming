#include "main.h"
/**
* _sqrt_recursion - prints the square root of a number
* @n: int
* @num: assumed square root
* Return: square root
*/
int _sqrt_recursion(int n, int num)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((num * num) == n)
		return (num);
	if ((num * num) > n)
		return (-1);
	else
		return (_sqrt_recursion(n, num + 1));
}
