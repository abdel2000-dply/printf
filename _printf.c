#include "main.h"

/**
 * op_char - prints characters
 * @vl: ...
 * 
*/
void op_char(va_list vl)
{
	_putchar(va_arg(vl, int));
}
/**
 * op_string - prints strings
 * @vl: ...
 * 
*/
void op_string(va_list vl)
{
	int i = 0;
	char *str = va_arg(vl, char *);

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * op_percent - prints percentage
 *
*/
void op_percent()
{
	_putchar('%');
}
/**
 * _printf - produces output according to a format
 * @format: format
 * Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list vl;
	int i = 0, j = 0;
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
					f_list[j].fo_fun(vl);
					break;
				}
				j++;
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	return (i);
}