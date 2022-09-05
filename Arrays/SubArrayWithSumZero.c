#include<stdio.h>
void subArrayWithSumZero(int ar[] , int size)
{
	int i,j,sum=0,start,end,flag=0;				
	for(i=0;i<size;i++)
	{
		sum=0;
		for(j=i;j<size;j++)
		{
			sum = sum+ar[j];
			if(sum==0)
			{
				start=i;
				end=j;
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	if(flag==1)
	{
		printf("\nSub array with sum equlas to 0 :-");
		for(i=start;i<=end;i++)
		{
			printf("%d\t" , ar[i]);
		}
	}
	else{
		printf("\n No subarray with sum equals 0");
	}
}
/*
	void subArrayWithSumZero(int ar[] , int size)			// O(n)
	{
		int i,sum=0,start,end,flag=0;
		for(i=0;i<size;i++)
		{
			sum = sum+ar[i];
			if(sum==0 || ar[i]==0  || /*condition to check if same num exists in array*\)
			{
	//			start=i;
	//			end=j;
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("\nSub array with sum equlas to 0 :-");
	//		for(i=start;i<=end;i++)
	//		{
	//			printf("%d\t" , ar[i]);
	//		}
		}
		else{
			printf("\n No subarray with sum equals 0");
		}
	}
*/
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
	printf("C program to find subarray with sum equlas to 0 :-");
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
	subArrayWithSumZero(ar,size);
}
