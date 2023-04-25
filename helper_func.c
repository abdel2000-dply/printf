#include "main.h"
/**
 * helper_func - ...
 * @format: ...
 * @vl: ...
 * @f_list: ...
 * Return: ...
 */
int helper_func(const char *format, va_list vl, fun *f_list)
{
	int i, j, len = 0, flag, flag2;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			flag = flag_checker(format[i]);
			if (flag != 0)
			{
				i++;
				flag2 = flag_checker(format[i]);
				if (flag == 2 && flag2 == 1)
				{
					flag = flag2, i++;
				}
				else if (flag2 != 0)
					i++;
			}
			for (j = 0; f_list[j].fmt; j++)
			{
				if (format[i] == f_list[j].fmt[0])
				{
					len += f_list[j].fo_fun(vl, flag);
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
			len += _putchar(format[i]);
	}
	return (len);
}
