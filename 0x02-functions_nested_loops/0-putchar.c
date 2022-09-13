#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char disp = "_putchar";

	while (disp)
	{
		putchar(disp);
		disp++;
	}
	putchar('\n');
	return (0);
}
