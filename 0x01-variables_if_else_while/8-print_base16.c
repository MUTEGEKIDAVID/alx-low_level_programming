#include<stdio.h>
#include<stdlib.h>
/** main -Entry point
 *
 * Return : Always 0 (success/correct)
 */
int main(void)
{
	unsigned char ch = '1';

	while (ch > '16')
	{
		putchar('0'+'x'+ch);
		putchar('\n');
		ch++;
	}

 

        return (0);
}



