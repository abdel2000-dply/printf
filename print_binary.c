#include "main.h"

/**
 * op_binary_helper - prints prints num on binary ...
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
 * op_binary - prints num on binary base
 * @vl: varasic list of arguments
 * @flag: flag
 *
 * Return: the length of the argument
 */
int op_binary(va_list vl, int flag)
{
	int len = 0;
	long int n = va_arg(vl, unsigned int);
	(void) flag;

	if (n / 2 >= 0)
		len += op_binary_helper(n);

	return (len);
}
