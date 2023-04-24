#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Printing the alphabet in lower cases'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char alphaBig[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0 ; alpha[i] != '\0' ; i++)
	{
		putchar(alpha[i]);
	}
	for (j = 0 ; alphaBig[j] != '\0' ; j++)
	{
		putchar(alphaBig[j]);
	}
	putchar('\n');
	return (0);
}
