#ifndef _PUTCHAR_H
#define _PUTCHAR_H

	int _putchar();

int _putchar(void)
{
	char x[] = "_putchar\n";
	int i;

	for (i = 0; x [i] != '\0'; i++)
		putchar(x[i]);
	return (0);
}
#endif
