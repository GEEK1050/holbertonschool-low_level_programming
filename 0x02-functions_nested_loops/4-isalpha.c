#include "holberton.h"
/**
*_isalpha - checks that c is alpha
*@c: the character to check
*Return: 1 if true and 0 if false
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
