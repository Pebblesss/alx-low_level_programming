#include "main.h"

/**
 * print_line - function that draws a straight line n times
 * @n: times straight line is printed
 * Return: no return
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	int i;

	for (i = 0; i <  n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
