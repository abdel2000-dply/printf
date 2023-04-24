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
	return (-1);
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

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i - 2);
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
	return (-1);
}
/**
 * _printf - produces output according to a format
 * @format: format
 * Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list vl;
	int i = 0, j = 0, len = 0;
	fun f_list[] = {
		{"c", op_char},
		{"s", op_string},
		{"%", op_percent},
		{NULL, NULL}
		};

	va_start(vl, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (f_list[j].fmt)
			{
				if (format[i] == f_list[j].fmt[0])
				{
					len = f_list[j].fo_fun(vl);
					break;
				}
				j++;
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	return (i + len);
}
