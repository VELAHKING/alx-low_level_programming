#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return: 0 (success)
 */

int main(void)
{
	int p;
	int q;
	int d;

	for (d = '0'; d < '9'; d++)
	{

	for (p = d + 1; p <= '9'; p++)
	{
	for (q = p + 1; q <= '9'; q++)
	{
	if ((p != d) != q)
	{
	putchar(d);
	putchar(p);
	putchar(q);
	if (id == '7' && p == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
