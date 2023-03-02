#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	char *p = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "433771";

	while (*p != '\0')
	{
		for (int i = 0; i < 10; i += 2)
		{
			if (*p == leet_chars[i] || *p == leet_chars[i + 1])
			{
				*p = leet_replacements[i / 2];
				break;
			}

		}
		p++;
	}
	return (str);
}
