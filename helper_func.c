#include "main.h"
/**
 * helper_func - ...
 * @format: ...
 * @vl: ...
 * @f_list: ...
 *
 * Return: ...
 */
int helper_func(const char *format, va_list vl, fun *f_list)
{
	int i, j, len = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);

			for (j = 0; f_list[j].fmt; j++)
			{
				if (format[i] == f_list[j].fmt[0])
				{
					len += f_list[j].fo_fun(vl);
					break;
				}
			}
			if (!f_list[j].fmt)
			{
				_putchar(format[i - 1]);
				_putchar(format[i]);
				len += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}

	}
	return (len);
}
