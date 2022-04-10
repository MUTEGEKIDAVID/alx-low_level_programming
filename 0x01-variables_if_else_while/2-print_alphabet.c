#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return : Always 0 (success/correct)
 */
int main(void)
{
	char ch = 'a';

	while ( ch <= 'z')
	{
		putchar(ch);
		putchar("\n");
		ch++;
	}
	return (0);
}

