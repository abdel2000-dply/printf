#include "main.h"
/**
 * op_add - prints a pointer's address
 * @vl: input
 * Return: the length
 */
int op_add(va_list vl)
{
	int i = 0;
	void *ptr = va_arg(vl, void *);
	unsigned long add = (unsigned long)ptr;

	if (!ptr)
		return (_printf("(nil)"));

	i += _printf("0x");
	i += convert_base(add, 16, 87);

	return (i);
}
