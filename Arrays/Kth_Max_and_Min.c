#include<stdio.h>
// Function to find kth element after sorting the array.
void k_th_max_min(int ar[] , int size , int k)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;
			}
		}
	}
	printArray(ar,size);
	printf("\n%dth maximum is %d and %dth minimum is %d" ,k,ar[size-k],k,ar[k-1]);
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
	int size,i,k;
	printf("C program to find Maximum and Minimum from and array");
	printf("\nEnter size of an array:- ");
	scanf("%d" , &size);
	int ar[size];
	printf("\nEnter array elemets :- ");
	for(i=0;i<size;i++)
	{
		scanf("%d" , &ar[i]);
	}
	printf("\nArray elements :- ");
	printArray(ar,size);
	printf("\nEnter a kth value you want to search i.e kth maximum and minimum:- ");
	scanf("%d" , &k);
	k_th_max_min(ar,size,k);
}
