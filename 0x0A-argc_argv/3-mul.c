#include <stdlib.h>
#include <stdio.h>
/**
* main - calls for other functions
* @argc: int
* @argv: char
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, results = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			results *= atoi(argv[i]);
		}
	printf("%d\n", results);
	}
	else if ( argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}	
