#include<stdio.h>
void maxSubarray(int ar[] , int size)
{
	int sum,i,j,largest,start,end;
	largest=ar[0];
	for(i=0;i<size;i++)
	{
		sum=0;
		for(j=i;j<size;j++)
		{
			sum = sum+ar[j];
			if(sum>largest)
			{
				start=i;
				end=j;
				largest=sum;
			}
		}
	}
	printf("\nLargest sum of sub array is :- %d" , largest);
	printf("\nSub array which has highest sum is:- ");
	for(i=start;i<=end;i++) 
	{
		printf("%d\t" , ar[i]);
	}
}

int kadane(int a[], int n){
    int i,maxi=0, curr=0;
    for(i=0; i<n; i++){
        curr+=a[i];
        if(curr>maxi) 
			maxi=curr;
        if(curr<0) 
			curr=0;
    }
	printf("\nMax sum of sub array is :- %d" , maxi);
}

void printArray(int ar[] , int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t" , ar[i]);
	}
}
void main()
{
	int size,i,n;
	printf("C program to find largest sum of subarray:-");
	printf("\nAlso known as Kadane's Algorithm");
	printf("\nEnter the size of array:- ");
	scanf("%d" , &size);
	int ar[size];
	printf("\nEnter array elements:-");
	for(i=0;i<size;i++)
	{
		scanf("%d" , &ar[i]);
	}
	printf("\nEntered array elements are :- ");
	printArray(ar,size);
//	maxSubarray(ar,size);
	kadane(ar,size);
}
