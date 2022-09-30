#include <stdio.h>
/**
 * main - function with two arguments
 * @argc: int type argument
 * @argv: char type pointer array argument
 *
 * Description: prints all arguments it receiveds
 * Return: void
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	print_string(argv[0]);
	putchar('\n');

	return (0);
}

/**
 * print_string - Prints all char of the string
 *
 * @str: Pointer to string
 *
 * Return : Void
 */

void print_string(char *str)
{
	int i = o;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
