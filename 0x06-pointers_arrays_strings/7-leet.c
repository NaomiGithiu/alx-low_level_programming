#include <stdio.h>
#include "main.h"
/**
*leet - calls for other functions
*
* @src: string
* Return: string
*/
char *leet(char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		src[i] = transform(src[i]);
		i++;
	}
	return (src);
}
/**
* transform - maps a letter with its leet encoding
* @x: char to be encoded
* Return: encoded char
*/
char transform(char x)
{
	char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char mapping_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int i = 0;
	char replacement = x;

	while (i < 0)
	{
		if (x == mapping_low[i] || x == mapping_upper[i])
		{
			replacement = i + '0';
			break;
		}
		i++;
	}
	return (replacement);
}
