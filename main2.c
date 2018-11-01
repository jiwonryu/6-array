#include <stdio.h>
#include <stdlib.h>
#define N_SORT 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (void){
	
	int nums[N_SORT];
	int i;
	
	printf("input %i numbers : ", N_SORT);
	for (i=0;i<N_SORT;i++)
	{
		scanf("%d", &nums[i]);
	}
	
	//sorting function
	//bubbleSort();
	
	printf("sorted numbers are : ");
	for (i=0;i<N_SORT;i++)
	{
		printf("%d",nums[i]);
	}
	
	return 0;
}
