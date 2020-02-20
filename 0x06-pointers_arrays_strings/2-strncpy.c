#include "holberton.h"

/**
 * _strncpy - copy n characters of string in other
 * @dest: destination
 * @src: source
 * @n: number of characters
 * Return: dst
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (src && _strlen(src))
	{
		for (i = 0 ; i < n ; i++)
		{
			dest[i] = src[i];

			if (src[i] == '\0')
				break;
		}

		if (dest[i] != '\0')
			dest[i] = '\0';
	}

	return (dest);
}

/**
 * _strlen - return the length of a string
 * @s: the string to check
 * Return: lenght
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
