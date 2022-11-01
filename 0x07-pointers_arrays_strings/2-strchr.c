#include "main.h"

/**
* _strchr - locates a character
*
* @s: string being searched
* @c: letter being searched for
*
* Return: pointer to first occurence. or NULL if not found
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return ('\0');
}
