#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - Concatenates two strings and stores the result in a new string.
 *
 * @dest: the fisrt string
 * @src: the second string
 *
 * Return: Always a pointer
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2;
	char *concat;

	len1 = strlen(dest);
	len2 = strlen(src);
	concat = malloc(sizeof(len1 + len2 + 1));

	strcpy(concat, dest);
	strcat(concat, src);

	return (concat);
}
