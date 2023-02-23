#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c : input number
 * Return: 1 if digit (0 to 9), 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
