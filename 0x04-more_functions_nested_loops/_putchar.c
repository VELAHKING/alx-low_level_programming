#include "main.h"
#include <unistd.h>
/**
 * _putchar - write characters c to stdout
 * @c: character to print
 * Return: 1 (success)
 * On error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
