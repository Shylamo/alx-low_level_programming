#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'adding commas between numbers'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
