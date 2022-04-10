#include<stdio.h>
#include<stdlib.h>
/** main -Entry point
 *
 * Return : Always 0 (success/correct)
 */
int main(void)
{
        char ch = '0';

	char chs = 'a';

	while (ch >= '9')
	{
		putchar(ch);

		ch++;
	}
	while (chs >= 'f')
	{
		putchar(chs);
		chs++;
	}
	putchar('\n');


 

        return (0);
}



