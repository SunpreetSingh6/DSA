#include<stdio.h>
void main()
{
	/*
		Converting an array into zig zag order a < b > c < d > e < f . 
		N = 7;
		ar = {4,3,7,8,6,2,1}	 -> 	3 4 7 8 6 2 1 -> 3 7 4 8 6 2 1 -> 3 7 4 8 2 6 1
		sol =  3 7 4 8 2 6 1		3 < 7 > 4 < 8 > 2 < 6 > 1.
	*/
	
	int i,N,temp;
	printf("Enter the size of the array :- ");
	scanf("%d" , &N);
	int ar[N];
	printf("Enter array elements :- ");
	for(i=0;i<N;i++)
		scanf("%d" , &ar[i]);
		
	for(i=0;i<N-1;i++)
	{
		if( i%2==0 && ar[i]>ar[i+1] )
		{	
			temp = ar[i];
			ar[i] = ar[i+1];
			ar[i+1] = temp;
		}
		else if( i%2==1 && ar[i]<ar[i+1] )
		{	
			temp = ar[i];
			ar[i] = ar[i+1];
			ar[i+1] = temp;
		}
	}
	
	for(i=0;i<N;i++)
		printf("%d\t" , ar[i]);
}
