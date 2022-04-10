#include<stdio.h>
#include<stdlib.h>
/** main -Entry point
 *
 * Return : Always 0 (success/correct)
 */
int main(void)
{
	char ch = 'a';

	

	while (ch <= 'z')
	{
		
		
		if(ch != 'q' || ch != 'e')
		
			putchar(ch);
                 
		ch++;
		
	}


	return (0);
}



