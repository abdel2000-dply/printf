#include "main.h"

/**
 * op_rot13 - encodes a string using rot13
 * @vl: string to encode
 * @flag: ...
 *
 * Return: the length of printed string
 */
int op_rot13(va_list vl, int flag)
{
	int i = 0, j;
	char *s = va_arg(vl, char *);
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	(void) flag;

	if (s == NULL)
		return (_printf("AHYY") - 1);

	for (; s[i]; i++)
	{
		j = 0;
		for (; alph[j]; j++)
		{
			if (s[i] == alph[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}

	}
	return (i);
}
