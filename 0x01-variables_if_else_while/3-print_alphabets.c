#include<stdio.h>
#include<stdlib.h>
/** main -Entry point
 *
 * Return : Always 0 (success/correct)
 */
int main(void)
{
	char ch = 'a';

	char chs = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (chs <= 'Z')
	{
		putchar(chs);
	}

	return (0);
}



