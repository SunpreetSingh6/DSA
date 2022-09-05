#include<stdio.h>
void main()
{
	// 	INCOMPLETE
	
	int i,j,k,N,max,nextMax,flag=0;
	printf("Enter size of the array :- ");
	scanf("%d" , &N );
	int ar[N];
	printf("Enter array elements :- ");
	for(i=0;i<N;i++)
	{
		scanf("%d" , &ar[i]);
	}
	
	for(i=0;i<N;i++)
	{
		max = ar[i];
		for(j=0; j<N && j!=i ; j++)
		{
			min_max = ar[j];
			if(ar[j] > ar[i] && )
			{
				flag=1;
				max = ar[j];
				
			}
		}
	}
}
