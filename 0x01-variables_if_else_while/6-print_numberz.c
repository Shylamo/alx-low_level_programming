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
	int i;
	char num[] = "0123456789";
	
	for (i = 0 ; num[i] != '\0' ; i++)
		putchar(num[i]);
	putchar('\n');

	return (0);
}
