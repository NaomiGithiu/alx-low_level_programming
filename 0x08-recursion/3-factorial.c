#include "main.h"
/**
* factorial - returns the factorialof a number
* @n: integer
* Return: factorial
*/
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
