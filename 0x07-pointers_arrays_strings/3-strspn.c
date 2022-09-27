#include "main.h"
/**
* _strspn -  gets the length of a prefix substring
* @s: char
* @accept: char
* Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int x, i = 0, z = 0, k = 0;

	for (x = 0; *(s + x) != 0; x++)
	{
		k = 0;
		for (i = 0; *(accept + i) != 0; i++)
		{
			if (*(s + x) == *(accept + i))
			{
				z++;
				k = 1;
			}
		}
		if (K == 0)
			return (z);
	}
	return (0);
}



