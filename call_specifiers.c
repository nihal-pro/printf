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
	int structsize;

	specifier_t checker_fct[] = {
		{'c', print_single_char_c},
		{'s', print_string_char_s}
	};
	structsize = sizeof(checker_fct) / sizeof(checker_fct[0]) - 1;
	while (structsize >= 0)
	{
		if (t == checker_fct[structsize].str)
		{
			break;
		structsize--;
		}
	}
	return (checker_fct[structsize].fct_op(myarg));
}
