#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * this programm prints the last digit of a random number
 *
 * returns 0
 */

int main (void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2 ;
l = n%10;

if (l > 5)
{
	printf("last digit of %i is %i and is greater than 5 \n", n , l);
}
else if (l==0)
{
	printf("last digit of %i is %i and is 0 \n", n , l);
}
else if (l<6 && l!=0)
{
	printf("last digit of %i is %i and is less than 6 and not 0 \n", n ,l);
}
return (0);
}
