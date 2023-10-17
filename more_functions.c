#include "main.h"
/**
 * Afterpercentage - Checks if there are characters
 * @s: The string to check
 *
 * Return: 0 if only spaces follow '%', 1 otherwise
 */
int Afterpercentage(const char *s)
{
	if (s[0] == '%')
	{
		int i = 0;

		while (s[i + 1] != '\0')
		{
			if (s[i + 1] != ' ')
			{
				return (1);
				i++;
			}
		}
		return (0);
	}
	return (1);
}
/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * _check_format - Checks if the character is a valid format
 * @car: The character to check
 *
 * Return: 0 if character is valid, 1 otherwise
 */
int _check_format(const char car)
{
	int i = 0;
	char ch[] = {'c', 's', '%', 'i', 'd', 'b', 'u', 'o', 'x', 'X', 'S', 'p', 'r'};

	while (ch[i])
	{
		if (ch[i] == car)
			return (0);
		i++;
	}
	return (1);
}
