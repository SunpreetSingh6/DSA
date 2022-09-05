#include<stdio.h>
int findTriplet(int ar[] , int N)
{
	int i,L,R,num,sum;
	for(i=N-1;i>1;i--)
	{
		L = 0;
		R = i-1;
		num = ar[i]*ar[i];
		while(L<R)
		{
			sum = (ar[L]*ar[L]) + (ar[R]*ar[R]);
			if(sum == num)
			{
//				printf("%d %d %d forms triplet \n" , ar[i] , ar[L] , ar[R] );
				return 1;
				L++;
			}
			else if(sum>num)
			{
				R--;
			}
			else
			{
				L++;
			}
		}
	}
	return 0;
}

void main()
{
	int i,N,L,R,num,sum;
	printf("Enter the size of the array:- ");
	scanf("%d" , &N);
	int ar[N];
	printf("Enter array elements in sorted order:- ");
	for(i=0;i<N;i++)
		scanf("%d" , &ar[i]);
	int result = findTriplet(ar,N);
	if(result)
	{
		printf("True");
	}
	
}
