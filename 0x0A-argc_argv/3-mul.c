#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two ints
*
* @argc: argument counter
* @argv: array argument storage
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		pritnf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
