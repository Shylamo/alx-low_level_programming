#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - check the code
 * s1 - parameter that describes the first sttring hello
 * s2 - parametre that describes the second word world
 * _strcat - is the function to call
 * Return: Always 0.
 */

char *_strcat(char *s1, char *s2)
{
	int len1, len2;
	char *concat;

	len1 = strlen(s1);
	len2 = strlen(s2);
	concat = malloc(sizeof(len1 + len2 + 1));

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
