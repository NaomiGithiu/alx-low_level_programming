#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
* main - calls for other functions
* @argc: int
* @argv: char
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc <= 0 )
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
	if (!isdigit(argv[i]))
	{
		return (1);
	}
	printf("Error\n");
	}
	return (0);
}
