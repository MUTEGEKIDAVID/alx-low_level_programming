#include<stdio.h>
#include<stdlib.h>
/** main -Entry point
 *
 * Return : Always 0 (success/correct)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		putchar('\n');
		ch--;
	}

 

        return (0);
}



