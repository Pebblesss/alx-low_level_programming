#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all numbers from input to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (i = n; i < 98; i++);
		{
			printf("%d' ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--);
		{
			printf("%d, ", i);
		}
	}

	printf("98\n");
}
