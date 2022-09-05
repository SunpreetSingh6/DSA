#include<stdio.h>
void unionOfArray(int ar1[] , int ar2[] , int size1 , int size2)
{
	int size = size1+size2; 
	int ar[size];
	int i,j,k,temp;
	for(i=0 ; i<size1 ; i++)
	{
		ar[i] = ar1[i];
	}
	for(j=0 ; j<size2 ; j++)
	{	
		ar[size1+j] = ar2[j];	
	}
	// Removing duplicates
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(ar[i] == ar[j])
			{
				for(k=j;k<size;k++)
				{
					temp = ar[k];
					ar[k] = ar[k+1];
					ar[k+1] = temp;
				}
				size--;
			}
		}
	}
	printf("\nUnion of both the arrays is :- ");
	printArray(ar,size);
//	removeDuplicates(ar,size);
}


void intersectionOfArray(int ar1[] , int ar2[] , int size1 , int size2)
{ 
	int i,j,k,temp,count=0;
	for(i=0 ; i<size1 ; i++)
	{
		for(j=0 ; j<size2 ; j++)
		{			
			if(ar1[i] == ar2[j])
			{
				count++;				// Counting no. of repeated elements
			}
		}
	}
	int ar[count];
	k=0;
	while(k<count)
	{
		for(i=0 ; i<size1 ; i++)
		{	
			for(j=0 ; j<size2 ; j++)
			{			
				if(ar1[i] == ar2[j])
				{
					ar[k] = ar2[j];		// Inserting repeated elements into new array
					k++;
				}
			}
		}		
	}
//	printf("\nNo. of common elements :- %d" , count);
	printf("\nIntersection of both the arrays is :- ");
	printArray(ar,count);
}
/*
void removeDuplicates(int ar[] , int size)
{
	int i,j,k,temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(ar[i] == ar[j])
			{
				for(k=j;k<size;k++)
				{
					temp = ar[k];
					ar[k] = ar[k+1];
					ar[k+1] = temp;
				}
				size--;
			}
		}
	}
	printf("\nUnion of both the arrays is :- ");
	printArray(ar,size);
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
	int size1,size2,i;
	printf("C program to find union of 2 arrays\n");
	printf("Enter size of 1st array :- ");
	scanf("%d" , &size1);
	int ar1[size1];
	printf("Enter array elements :- ");
	for(i=0;i<size1;i++)
	{
		scanf("%d" , &ar1[i]);
	}
	printf("Enter size of 2nd array :- ");
	scanf("%d" , &size2);
	int ar2[size2];
	printf("Enter array elements :- ");
	for(i=0;i<size2;i++)
	{
		scanf("%d" , &ar2[i]);
	}
	printf("\nArray elements of 1st array :- ");
	printArray(ar1,size1);
	printf("\nArray elements of 2nd array :- ");
	printArray(ar2,size2);
	unionOfArray(ar1,ar2,size1,size2);
	intersectionOfArray(ar1,ar2,size1,size2);
}
