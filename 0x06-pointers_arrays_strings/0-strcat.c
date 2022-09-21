#include "main.h"
/**
*_strcat - concatenates two strings
*
*@dest: string
*@src: string
*Return: pointer
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, dest-len = 0;

	while (dest[index++])
		dest-len++;

	for (index = 0; src[index]; index++)
		dest[dest-len++] = src[index];

	return (dest);
}
