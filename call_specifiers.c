#include <stdarg.h>
#include "main.h"
/**
 * check_specifier - Determines the appropriate function for a specifier
 * @t: Specifier character
 * @myarg: argument passes to the fucntion
 * Return: Pointer to the corresponding function or NULL
 */
int check_specifier(const char t, va_list myarg)
{
	 unsigned int index = 0, len = 0;

	specifier_t checker_fct[] = {
		{'c', print_single_char_c},
		{'s', print_string_char_s},
		{'%', print_percentage},
		{'!', print_exclamation},
		{'K', print_K},
		{'i', h_integer},
		{'d', h_integer}};

	while (index < sizeof(checker_fct) / sizeof(checker_fct[0]))
	{
		if (t == checker_fct[index].str)
		{
			/*return(function)*/
			len += checker_fct[index].fct_op(myarg);
			break; /*count one caracter (delete break)*/
		}
		index++;
	}
	return (len);
}
