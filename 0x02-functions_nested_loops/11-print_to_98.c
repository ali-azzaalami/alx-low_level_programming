#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: a parameter
 */
void print_to_98(int n)
{

	if (n > 98)
	{
		for (n = n; n  > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	} else if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	} else
	{
		printf("%d\n", 98);
	}
}
