#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format
 * Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list vl;
	int len = 0;
	fun f_list[] = {
		{"c", op_char},
		{"s", op_string},
		{"%", op_percent},
		{"d", op_int},
		{"i", op_int},
		{"b", op_binary},
		{"o", op_octal},
		{"x", op_hex},
		{"X", op_heX},
		{"u", op_uint},
		{"S", op_nptbl},
		{"p", op_add},
		{"r", op_reverse},
		{"R", op_rot13},
		{NULL, NULL}
		};

	if (!format)
		return (-1);

	va_start(vl, format);

	len = helper_func(format, vl, f_list);
	va_end(vl);
	return (len);
}
