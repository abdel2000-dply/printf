#include "main.h"


int main()
{
    int a, b;

    printf("===== %%d DECEMAL NUMBERS=====")
	a = printf("%d\n", 1024);
	b = _printf("%d\n", 1024);
	printf("results = %d\n", a==b);

	a = printf("%d\n", -1024);
	b = _printf("%d\n", -1024);
	printf("results = %d\n", a==b);

	a = printf("%d\n", 0);
	b = _printf("%d\n", 0);
	printf("results = %d\n", a==b);

	a = printf("%d\n", INT_MAX);
	b = _printf("%d\n", INT_MAX);
	printf("results = %d\n", a==b);

	a = printf("%d\n", INT_MIN);
	b = _printf("%d\n", INT_MIN);
	printf("results = %d\n", a==b);

	a = printf("%d\n", INT_MAX + 1024);
	b = _printf("%d\n", INT_MAX + 1024);
	printf("results = %d\n", a==b);

	a = printf("%d\n", INT_MIN - 1024);
	b = _printf("%d\n", INT_MIN - 1024);
	printf("results = %d\n", a==b);

	a = printf("There is %d bytes in %d KB\n", 1024, 1);
	b = _printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("results = %d\n", a==b);

	a = printf("%d - %d = %d\n", 1024, 2048, -1024);
	b = _printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("results = %d\n", a==b);

	a = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	b = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("results = %d\n", a==b);

    return (0);
}