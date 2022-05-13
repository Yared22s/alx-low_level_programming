#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * sum_them_all - start point
  * @n: Variadic inputs
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list vl;

	if (n == 0)
	return (0);
	
	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(vl, const unsigned int);
	}

	va_end(vl);

	return (sum);
}
