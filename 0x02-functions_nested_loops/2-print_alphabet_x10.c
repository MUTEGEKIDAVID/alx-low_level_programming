#include "main.h"
/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times
 *
 * return :nothing.
 */

void print_alphabet_x10(void)
{
	int n,i;

	i=0;

	while (i < 10)
	{
		for(n = 'a' ; n <= 'z' ;n++)
		{
			_putchar(n);
		}
		i++;
	        _putchar('\n');
	}
}



