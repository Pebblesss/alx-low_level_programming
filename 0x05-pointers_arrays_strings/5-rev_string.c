#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length = 0, i;
	char tmp;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}
