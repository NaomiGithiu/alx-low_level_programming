#include "main.h"
/**
* primefunction - returns 1 if a number is a prime number
* @num: int
* @i: int
* Return: 1
*/
int primefunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
			return (0);
		return (primefunction(num, i + 1));
	}
	else
		return (1);
}
/**
* is_prime_number - checks for prime number
* @n: int
* Return: 1 if a number is a prime number
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primefunction(n, 2));
}
