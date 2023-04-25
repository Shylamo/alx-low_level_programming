#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'Hexadecimal'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i ;

	for ( i = 48; i <= 57; i++)
		putchar(i);
	for ( i = 65; i <= 70; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
