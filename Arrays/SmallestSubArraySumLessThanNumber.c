#include<stdio.h>
void findSubArray(int ar[] , int size , int num)
{
	int i,start,end,sum;
	for(i=0;i<size;i++)
	{
		if(ar[i] >= num)
		{
			printf("\nElement %d is greater than or equals to %d found at index %d" ,ar[i] , num , i);
			break;
		}
		else{
				// INCOMPLETE
		}
	}
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
	int size,i,num;
	printf("C program to find the smallest subarray with sum greater than the given number :- \n");
	printf("Enter size of an array :- ");
	scanf("%d" , &size);
	int ar[size];
	printf("Enter array elements :- ");
	for(i=0;i<size;i++)
	{
		scanf("%d" , &ar[i]);
	}
	printf("Array elements :- ");
	printArray(ar,size);
	printf("\nEnter number to find the smallest subarray with sum greater than the entered number :- ");
	scanf("%d" , &num);
	findSubArray(ar,size,num);
}

