#include "main.h"

/**
 * _islower - lowercase characters
 * @c: characters to be checked
 * Return: 1 for lowercase 0 for anythinf else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
