#include "main.h"
/**
* rot13 -  encodes a string using rot13
*
* @src: string to be encoded
* Return: encoded string
*/
char *rot13(char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		src[i] = transform_2(src[i]);
		i++;
	}
	return (src);
}
/**
* transform_2 - maps a letter its encode
*
* @x: char to be encoded
* Return: encoded char
*/
char transform_2(char x)
{
	char one[52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char two[52] = {"MNOPQRSTUVWXYZABCDEFGHIJKLmnopqrstuvwxyzabcdefghijkl"};
	int i = 0;
	char replacement = x;

	while (i < 52)
	{
		if (x == one[i])
		{
			replacement = two[i];
			break;
		}
		i++;
	}
	return (replacement);
}
