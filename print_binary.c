#include "main.h"

/**
 * op_int_helper - prints 
 * @n: integer
 *
 * Return: the length of @n
 */
int op_binary_helper(long int n)
{
	int len = 0;

	if (n / 2)
		len += op_binary_helper(n / 2);

	len += _putchar((n % 2) + '0');

	return (len);
}

/**
 * op_int - prints 
 * @vl: varasic list of arguments
 *
 * Return: the length of the argument
 */
int op_binary(va_list vl)
{
	int len = 0;
	unsigned int n = va_arg(vl, unsigned int);

	if (n / 2 >= 0)
		len += op_binary_helper(n);

	return (len);
}