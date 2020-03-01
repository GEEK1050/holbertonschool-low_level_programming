#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		cmp = s1[i] - s2[i];
		if (cmp)
			break;

		i++;
	}

	return (cmp);
}
