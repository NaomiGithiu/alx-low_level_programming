#include "main.h"
/**
* _memcpy - copies memory area
* @dest: character
* @src: character
* @n: int
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(dest + x) = *(src + x);
	return (dest);
}
