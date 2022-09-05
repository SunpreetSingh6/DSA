#include<stdio.h>
//Given an array of N integers, and sum K, find the sub array in the array whose sum is equal to K.

//Input:
//N = 4, K = 6
//arr[] = {1, 5, 7, 1}
//Output: 1 5
//Explanation: 
//arr[0] + arr[1] = 1 + 5 = 6 

//N = 4, K = 2
//arr[] = {1, 1, 1, 1}
//Output: 6
//Explanation: 
//Each 1 will produce sum 2 with any 1.

void subArray(int ar[] , int size , int sum)
{
	int i,j,start=0,s=0;
	for(i=0;i<size;i++)
	{
		s += ar[i];
		while(s > sum)
		{
			s -= ar[start];
			start++;
		}
		if(s == sum)
		{
			printf("Sub array from %d to %d \n" , ar[start] , ar[i]);
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
	int size,i,sum;
	printf("C program to find the sub array whose sum is equals to given sum :- \n");
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
	printf("\nEnter the sum for which you want to find sub array :- ");
	scanf("%d" , &sum);
	subArray(ar,size,sum);
}
