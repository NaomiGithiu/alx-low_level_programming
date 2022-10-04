#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - creates an array
* @size: unsigned int
* @c: char
* Return: a pointer or a null
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
