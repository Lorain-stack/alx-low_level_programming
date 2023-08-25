#include "main.h"

/**
 * cap_string - capitalizes all word in the string
 * @str: The string to be cap
 * Return: str
 */

char *cap_string(char *str)
{
	int pos = 0;

	while (str[pos])
{
		while (!(str[pos] >= 'a' && str[pos] <= 'z'))
			pos++;
	if (str[pos - 1] == ' ' ||
	str[pos - 1] == '\t' ||
	str[pos - 1] == '\n' ||
	str[pos - 1] == ',' ||
	str[pos - 1] == ';' ||
	str[pos - 1] == '.' ||
	str[pos - 1] == '!' ||
	str[pos - 1] == '?' ||
	str[pos - 1] == '{' ||
	str[pos - 1] == '}' ||
	str[pos - 1] == '"' ||
	str[pos - 1] == '(' ||
	str[pos - 1] == ')' ||
	pos == 0)
		str[pos] -= 32;
	pos++;
}
	return (str);
}
