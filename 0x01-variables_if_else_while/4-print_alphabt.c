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
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0 ; alpha[i] != '\0' ; i++)
	{
		if (alpha[i] != 'e' && alpha[i] != 'q')
		{
			putchar(alpha[i]);
		}
		/*else
			putchar(alpha[i]);*/
	}
	putchar('\n');
	return (0);
}
