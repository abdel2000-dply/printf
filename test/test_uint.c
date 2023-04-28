#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

int main()
{

    int len, len2;

    /*===== %lu %hu LONG/SHORT UNSIGNED =====*/
    printf("===== %%lu %%hu LONG/SHORT UNSIGNED =====");
	len = _printf("%lu\n", ULONG_MAX);
	len2 = printf("%lu\n", ULONG_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
	}

	len = _printf("%lu - %lu = %lu\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	len2 = printf("%lu - %lu = %lu\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
	}

	len = _printf("%lu - %lu = %lu\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	len2 = printf("%lu - %lu = %lu\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
	}

	len = _printf("%lu - %lu = %lu\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	len2 = printf("%lu - %lu = %lu\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
	}

	len = _printf("%hu\n", USHRT_MAX);
	len2 = printf("%hu\n", USHRT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
	}

	len = _printf("There is %hu bytes in %hu KB\n", 1024, 1);
	len2 = printf("There is %hu bytes in %hu KB\n", 1024, 1);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
	}

	len = _printf("%hu\n", USHRT_MAX);
	len2 = printf("%hu\n", USHRT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
	}

	len = _printf("There is %hu bytes in %hu KB\n", 1024, 1);
	len2 = printf("There is %hu bytes in %hu KB\n", 1024, 1);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
	}

	len = _printf("%hu - %hu = %hu\n", USHRT_MAX, 2048, USHRT_MAX - 2048);
	len2 = printf("%hu - %hu = %hu\n", USHRT_MAX, 2048, USHRT_MAX - 2048);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
	}

    return (0);
}