#include<stdio.h>
void findDuplicate(int ar[] , int size)
{
/*
//	To find single duplicate item
	
	int i,j,duplicate;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(ar[i] == ar[j])
			{
				duplicate = ar[i];
				break;
			}
		}
	}
	if(duplicate)
	{
		printf("\nDuplicate item in array is :- %d" , duplicate);	
	}
	else
	{
		printf("\nNo duplicate item in array");
	}
*/

// To find multiple duplicate items
	int i,j,count=0,index=0;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(ar[i] == ar[j])
			{
				count++;
			}
		}
	}
	printf("\nCommon items in array is/are :- %d" , count);
	int duplicates[count];
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(ar[i] == ar[j])				 
			{
				duplicates[index] = ar[i];
				index++;
//				printf("\nDuplicate item in array is :- %d"  , ar[i]);
			}
		}
	}
	if(count)
	{
		printf("\nDuplicate items in array is :- ");
		printArray(duplicates,count);	
	}
	else
	{
		printf("\nNo duplicate item in array");
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
	int size,i;
	printf("C program to find duplicate items in an array :- \n");
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
	findDuplicate(ar,size);
}
