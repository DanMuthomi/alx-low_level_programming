#include "main.h"

/**
* _strstr - finding needle in haystack
*
* @needle: occurence being searched
* @haystack: string being searched from
*
* Return: pointer to occurence. NULL if non found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *haystack1;
	char *needle1;

	while (*haystack != '\0')
	{
		haystack1 = haystack;
		needle1 = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *needle1)
		{
			haystack++;
			needle1++;
		}
		if (!*needle1)
			return (haystack1);
		haystack = haystack1 + 1;
	}
	return (0);
}
