#include<stdio.h>
void findElements(int ar[] , int size , int k)
{
	int i,j,count;
	int n = size/k;
	printf("n/k is:- %d" , n);
	printf("\nTotal elements that appear more than n/k times :- ");
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(ar[i] == ar[j])
			{
				count++;
			}
		}
		if(count > n)
		{
			printf("%d\t" , ar[i]);
		}
		
		// Having issue in this example 1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1 ; size=13 , k=4
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
	int size,i,k;
	printf("Given an array of size n and a number k, find all elements that appear more than n/k times \n");
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
	printf("\nEnter the value for k :- ");
	scanf("%d" , &k);
	findElements(ar,size,k);
}
