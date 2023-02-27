#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length, i, start;

	for (length = 0; str[length] != '\0'; length++)
		;

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n')
}
