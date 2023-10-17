#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: parametre
 * Return:the number of characters printed
 */
int _printf(const char *format, ...)
{
	int len_count = 0;
	va_list myarg;

	if (format == NULL || ((format != NULL ) && (*format == '\0')))
		return (-1);

	if (Afterpercentage(format) == 0)
		return (0);

	va_start(myarg, format);
	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
	{
		format++;		/*To check next character*/
		if (_check_format(*(format + 1) == 0))
		{
			len_count += check_specifier(*(format + 1), myarg);
			format++;
		}
		else
		{
			write(1, format, 1);
			len_count += 1;
		}
		format++;	/*Next*/
	}
	}
	va_end(myarg);
        return (len_count);
}
