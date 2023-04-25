#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'Printing the alphabet in inverse'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha;

	for (alpha = 122; alpha >= 97; alpha--)
		putchar(alpha);
	putchar('\n');
	return(0);

}
