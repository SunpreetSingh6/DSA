#include<stdio.h>
void main()
{
	/*
		Given an array ar[] of positive integers of size N. Reverse every sub-array group of size K.
		N=5 , K=3
		ar[] = 1 2 3 4 5
		sol :- 3 2 1 5 4
		
		N=7 , K=5
		ar[] = 1 2 3 4 5 6 7
		sol :- 5 4 3 2 1 7 6
	*/
	
	int i,j,k,N,K,temp;
	printf("Enter the size of array :- ");
	scanf("%d" , &N);
	printf("Enter the group size :- ");
	scanf("%d" , &K);
	int ar[N];
	printf("Enter array elements :- ");
	for(i=0;i<N;i++)
		scanf("%d" , &ar[i]);
	for(i=0;i<N;)
	{
		j=i;
		if(i+K < N)
		{
			k = i+K-1;
		}
		else
		{
			k = N-1;
		}
		while(j<k)
		{
			temp = ar[j];
			ar[j] = ar[k];
			ar[k] = temp;
			j++;
			k--;
		}
		i += K; 
	}
	
	for(i=0;i<N;i++)
	{
		printf("%d \t" , ar[i]);
	}
}
