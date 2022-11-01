#include "main.h"

/**
* _strpbrk - locates string in a set of bytes
*
* @s: string being evaluated
* @accept: string being searched in
*
* Return: pointer to byte s. NULL if non found
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
