#include "lists.h"
#include <stdio.h>
void _attribute_((constructor)) hare(void);
/**
* hare - prints a string before 
* the main function is executed
*/
void hare(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
