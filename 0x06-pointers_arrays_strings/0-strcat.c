#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - Concatenates two strings and stores the result in a new string.
 *
 * @s1: the fisrt string
 * @s2: the second string
 *
 * Return: Always a pointer
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
