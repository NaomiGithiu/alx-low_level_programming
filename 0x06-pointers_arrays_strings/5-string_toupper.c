#include "main.h"
/**
*string_toupper - converts lowercase strings to uppercase
*
*@src: string to changed
*Return: the converted string
*/
char *string_toupper(char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (src[i] >= 'a' && src[i] <= 'z')
			src[i] -= 32;
		i++;
	}
	return (src);
}
