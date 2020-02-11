#include "holberton.h"
#include "5-sign.h"

/**
*print_sign - check the sign of n
*@n: character to check
*Return: 1 if positive 0 if neutral and -1 if negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
