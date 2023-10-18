#include "main.h"
/**
 *h_integer - handle with integer number
 *@_ptr: pointeur to an argument
 *Return: len
 */
int h_integer(va_list _ptr)
{
	long int len = 0, i = 0, num = va_arg(_ptr, int);
	char arrays[26];
	int is_negative = 0;

	if (num < 0)
	{
		is_negative = 1;
		num *= -1;
	}

	do {
		arrays[i] = num % 10 + 48;
		num /= 10;
		i++;
	} while (num > 0);
	if (is_negative == 1)
	{
		arrays[i] = '-';
		arrays[++i] = '\0';
	}
	else
	{
		arrays[i] = '\0';
	}
	do {
		write(1, &arrays[--i], 1);
	} while (i > 0);
	{
	len = strlen(arrays);
	}
	return (len);
}
