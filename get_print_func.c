#include "main.h"

/**
 * get_print_func - selects the correct function to perform the operation
 * @s: argument identifier
 * @index: index for argument identifier
 * Return: pointer to a function
 */
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str},
		{"i", print_int}, {"d", print_int},
		{"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex},
	}
}
