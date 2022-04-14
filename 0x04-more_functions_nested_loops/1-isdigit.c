#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if paramter c represents a digit.
 * @c: Int representing a digit
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
