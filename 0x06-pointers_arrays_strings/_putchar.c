#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character to stdout
 * @c: character to print
 * Return: 1 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
