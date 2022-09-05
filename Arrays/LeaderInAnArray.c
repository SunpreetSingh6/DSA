#include<stdio.h>
void main()
{
	/* A number is leader if all the elements to its right are smaller or eauals to it , Last element of an array is always a leader */
	int i,j,N,flag;
	printf("Enter size :- ");
	scanf("%d" , &N);
	int ar[N];
	printf("Enter array elements :- ");
	for(i=0;i<N;i++)
		scanf("%d" , &ar[i]);
// -----------------------------------------------------
// With O(n^2)
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			flag=0;
			if(ar[j] > ar[i])
			{
				flag=0;
				break;	
			}
			flag=1;
		}
		if(flag || i==N-1)
		{
			printf("%d \t" , ar[i]);
		}
	}	
/*	With O(n) - But will print in reverse order.

	int max = ar[N-1];
	for(i=N-1 ; i>=0 ;i--)
	{
		if(ar[i] >= max)
		{
			printf("%d \t" , ar[i]);
			max = ar[i];
		}
	}
	
*/
}
