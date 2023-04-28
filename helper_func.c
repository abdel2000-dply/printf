#include "main.h"
/**
 * helper_func - take of what to print
 * @format: string
 * @vl: list of arguments
 * @f_list: list of conversion specifiers
 *
 * Return: length of what was printed
 */
int helper_func(const char *format, va_list vl, fun *f_list)
{
	int i, j, len = 0, flag, flag2;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0' || (format[i] == ' ' &&
			(format[i + 1] == ' ' || format[i + 1] == '\0')))
				return (-1);
			flag = flag_checker(format[i]);
			if (flag != 0)
			{
				i++;
				flag2 = flag_checker(format[i]);
				if (flag == 2 && flag2 != 0)
					flag = flag2, i++;
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
				if (flag != 0 && format[i] == '\n')
					len += _printf("%%\n");
				else
					len += _printf("%c%c", format[i - 1], format[i]);
			}
		}
		else
			len += _putchar(format[i]);
	}
	return (len);
}
