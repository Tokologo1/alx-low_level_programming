#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int change(int cents);
/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array poiting to arguments
 * Return: Null
 */
int main(int argc, char *argv[])
{
	if (agrc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}

	printf("%d\n", change(atoi(argv[i])));
	return (0);
}
