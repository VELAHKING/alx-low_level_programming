#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: character
 * Return: 0 / 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
