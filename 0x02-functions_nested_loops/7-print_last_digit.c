#include "main.h"

/**
 * _print_last_digit -prints the last digit in a number
 * @n:int type number
 * Return: the last digit
 */

int  _print_last_digit(int n)
{
	int nv;

	if (n > 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}


