#include "main.h"

/**
 * op_int_helper - prints a number
 * @n: integer to print
 *
 * Return: length of @n
 */
int op_int_helper(long int n)
{
	unsigned int x = n;
	int len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		x = -n;
	}

	if (x / 10)
		len += op_int_helper(x / 10);

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
	int len = 0;
	int n = va_arg(vl, int);
	int x = n;

	if (flag == 5 || x < 0)
		n = x;
	if (flag == 1 && n >= 0)
		len += _putchar('+');
	if (flag == 2 && n >= 0)
		len += _putchar(' ');

	return (len + op_int_helper(n));
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
	unsigned int n = va_arg(vl, unsigned int);
	int x;

	if (flag == 5)
		x = n, n = x;

	return (op_int_helper(n));
}


