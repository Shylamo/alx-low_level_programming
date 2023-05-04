#include <stdio.h>
#include "main.h"

/*
 * _putchar - prints putchar sentence
 * Return 0 always success
 */

int _putchar(void)
{
	char x[] = "_putchar\n";
	int i;

	for (i = 0; x[i] != '\0'; i++)
		putchar(x[i]);
	return (0);
}
