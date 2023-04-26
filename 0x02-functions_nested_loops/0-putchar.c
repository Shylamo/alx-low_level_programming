#include <stdio.h>
#include "main.h"
#include <time.h>
/*
 * Main : - Entry
 * _putchar :  prints putchar sentence
 * Description : that 's it
 */

int _putchar(void)
{
	char x[] = "_putchar\n";
	int i;

	for (i = 0; x [i] != '\0'; i++)
		putchar(x[i]);
	return (0);
}

int main(void)
{
	_putchar();

	return (0);
}
