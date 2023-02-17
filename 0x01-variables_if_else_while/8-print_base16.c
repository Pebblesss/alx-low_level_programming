#include <stdio.h>

/**
 * main - prints all base numbers of 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	putchar(i + '0');
	for (i = 'a'; i <= 'f'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
