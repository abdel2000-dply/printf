#include "main.h"

/**
 * op_char - prints characters
 * @vl: ...
 *
 * Return: ...
*/
int op_char(va_list vl)
{
	_putchar(va_arg(vl, int));
	return (1);
}
/**
 * op_string - prints strings
 * @vl: ...
 * Return: ...
*/
int op_string(va_list vl)
{
	int i = 0;
	char *str = va_arg(vl, char *);

	if (!str)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * op_percent - prints percentage
 * @vl: ...
 *
 * Return: ...
*/
int op_percent(va_list vl)
{
	(void) vl;

	_putchar('%');
	return (1);
}
/**
 * _printf - produces output according to a format
 * @format: format
 * Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list vl;
	int i, j, len = 0;
	fun f_list[] = {
		{"c", op_char},
		{"s", op_string},
		{"%", op_percent},
		{NULL, NULL}
		};

	if (!format)
		return (-1);

	va_start(vl, format);

	len = helper_func(format, vl, f_list);
	va_end(vl);
	return (len);
}
