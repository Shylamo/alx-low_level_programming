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
	int x, y;

	for (x = 48; x <= 56; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (x > y)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}