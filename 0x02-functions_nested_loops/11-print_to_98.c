#include <stdio.h>
/**
*print_to_98 - prints all natural numbers
*@n: the numbers start counting at n
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d ", n--);
		printf("%d ", n);
		printf("\n");
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
