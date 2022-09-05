#include<stdio.h>
void main()
{    
	// 	INCOMPLETE
	 
	int i,j,k,N,element,flag=0;
	printf("Enter size of the array :- ");
	scanf("%d" , &N );
	int ar[N];
	printf("Enter array elements :- ");
	for(i=0;i<N;i++)
	{
		scanf("%d" , &ar[i]);
	}
	
	for(i=1;i<N-1;i++)
	{
		element = i;
		j=0;
		k=N-1;
		flag=0;
//		printf("%d %d %d \n" ,j,i,k);
//		printf("Hello \n");
		while( j<element || k>element )
		{
//			printf("Hi \n");
			
			
			if(ar[j]<=ar[i] && ar[k]>=ar[i])
			{
				printf("%d %d %d \n" , j,i,k);
				printf("%d %d %d \n" , ar[j] ,ar[i] ,ar[k]);
				flag=1;
				if(j < i)										// Error in this code.
				{
					j++;
				}
				if(k-1 != i)
				{
					k--;
				}
				
			}
			else{
				break;
			}
		}
		if(flag)
		{
			printf("Element whose all left element are smaller and all right elements are larger is :- %d \n" , ar[element] ); 
		}
	}
	
}
