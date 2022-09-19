#include "main.h"
/**
*swap_int - swaps integers
*
*@a: first int
*@b: second int
*Return: void
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
