#include "main.h"

/**
 * op_int_helper - prints a number
 * @n: integer
 *
 * Return: the length of @n
 */
int op_int_helper(long int n)
{
	int len = 0;

	if (n / 10)
		len += op_int_helper(n / 10);

	len += _putchar((n % 10) + '0');

	return (len);
}

/**
 * op_int - prints an integer
 * @vl: varasic list of arguments
 *
 * Return: the length of the printed chars
 */
int op_int(va_list vl)
{
	int len = 0;
	long int n = va_arg(vl, int);

	if (n < 0)
	{
		len += _putchar('-');
		n = -n;
	}

	return (len + op_int_helper(n));
}

/**
 * op_uint - prints an unsigned integer
 * @vl: varasic list of arguments
 *
 * Return: the length of the printed chars
 */
int op_uint(va_list vl)
{
	long int n = va_arg(vl, unsigned int);

	return (op_int_helper(n));
}


