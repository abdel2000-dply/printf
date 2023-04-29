#include "main.h"

/**
 * op_long_helper - prints a number
 * @n: integer to print
 *
 * Return: length of @n
 */
int op_long_helper(long n)
{
	unsigned long x = n;
	int len = 0;

	if (x / 10)
		len += op_long_helper(x / 10);

	len += _putchar((x % 10) + '0');

	return (len);
}

/**
 * op_int - prints an integer
 * @vl: varasic list of arguments
 * @flag: flag
 *
 * Return: length of the printed chars
 */
int op_int(va_list vl, int flag)
{
	int len = 0, y;
	long n;

	n = (flag == 4) ? va_arg(vl, unsigned long) : va_arg(vl, int);
	y = n;

	if (flag == 5)
		n = y;
	if (flag == 1 && n >= 0)
		len += _putchar('+');
	if (flag == 2 && n >= 0)
		len += _putchar(' ');
	if (n < 0)
	{
		len += _putchar('-');
		n = -n;
	}

	len += op_long_helper(n);

	return (len);
}

/**
 * op_uint - prints an unsigned integer
 * @vl: varasic list of arguments
 * @flag: flag
 *
 * Return: length of the printed chars
 */
int op_uint(va_list vl, int flag)
{
	unsigned long n;
	unsigned long x;
	int i = 0, len = 0;
	char *str;
	(void) flag;

	n = (flag == 4) ? va_arg(vl, unsigned long) : va_arg(vl, unsigned int);
	x = n;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	for (; n > 0; i++)
		n /= 10;

	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (-1);

	for (i = 0; x > 0; i++)
	{
		str[i] = (x % 10) + '0';
		x /= 10;
	}
	str[++i] = '\0';
	len = rev(str);
	free(str);

	return (len);
}
