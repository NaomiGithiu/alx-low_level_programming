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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
