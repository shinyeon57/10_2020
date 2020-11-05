#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i;
	int grade[5];
	int sum = 0;
	int *ptr;		//ptr 
	
	for(i=0;i<5;i++)
	{
		ptr = &grade[i];		//ith address
		printf("grade[%i]=", i);
		scanf("%d", ptr);
	}
		
	for(i=0;i<5;i++)
	{
		ptr = &grade[i];		//ptr point array's address
		sum += *ptr ;			
		printf("grade[%d]=%d\n", i, *ptr);
}

	printf("average : %i\n", sum/5);
	return 0;	
}
