#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @n: paramter
 * Return: the absolute value
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
