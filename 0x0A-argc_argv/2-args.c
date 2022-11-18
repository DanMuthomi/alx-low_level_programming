#include <stdio.h>

/**
* main - prints arguments passed in a new line
*
* @argc: argument counter
* @argv: array argument storage
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
