#include "main.h"

/**
* _strcmp - comparing two strings
*
* @s1: first string
* @s2: second string
*
* return 0: if s1 and s2 are equal
*	-: if s1<s2
*	+: is s1>s2
*/

int _strcmp(char *s1, char *s2)
{
	int i, cmp;

	i = 0;
	cmp = 0;
	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		else if (s1[i] == '\0')
		{
			cmp = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			cmp = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			break;
		}
		else
		{
			i++;
		}
	}
	return (cmp);
}
