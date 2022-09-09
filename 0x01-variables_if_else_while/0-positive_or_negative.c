#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main prints if a number is positive, negative or zero
 *
 * Description: using the main function 
 * the script prints a programm is positive or negative
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n<0)
{
	printf("%i is negative",n);
}
else if (n==0)
{
	printf("%i is zero", n);
}
else
{
	printf ("%i is positive", n);
}
return (0);
}
