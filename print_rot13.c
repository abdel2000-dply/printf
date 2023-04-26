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
	int i = 0, j, len = 0;
	char *s = va_arg(vl, char *);
	char alph[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = " NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	(void) flag;

	if (s == NULL)
		s = "(NULL)";

	for (; s[i]; i++)
	{
		for (j = 0; alph[j]; j++)
		{
			if (s[i] == alph[j])
			{
				len += _putchar(rot13[j]);
				break;
			}
		}

	}
	return (len);
}
