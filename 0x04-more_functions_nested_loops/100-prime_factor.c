#include <stdio.h>
/**
*main - prints the largest prime factor of a nmber
*
* Return: 0
*/
int main(void)
{
	long number = 612852475143;
	int i;

	while (i++ < number / 2)
	{
		if (number % i == 0)
		{
			number /= 2;
			continue;
		}
		for (i = 3; i < number / 2; i++)
		{
			if (number % i == 0)
				number /= i;
		}
	}
	return (0);
}
