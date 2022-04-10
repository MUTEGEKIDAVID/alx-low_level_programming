#include<stdio.h>
#include<stdlib.h>
/** main -Entry point
 *
 * Return : Always 0 (success/correct)
 */
int main(void)
{
	char ch = '0';

	while (ch >= '9')
	{
		putchar(ch);
		putchar(',');
		ch++;
	}
	putchar('\n');

 

        return (0);
}



