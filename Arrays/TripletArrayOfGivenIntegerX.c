#include<stdio.h>
int findTriplet(int ar[], int size, int x) 
{ 
    int i,j,itr ,sum; 
    printf("Triplet is :- ");
    for (i = 0; i < (size-2); i++)  		// size-2 because only last 2 elements can form triplet.
	{
		for (j = i+1; j < size-1; j++) 
		{
			int k = j+1;
			sum = ar[i] + ar[j];
			while(k<size)
			{
				if((sum+ar[k]) == x)
				{
					printf("\n %d %d %d " , ar[i] , ar[j] , ar[k]);
					k++;
				}
				else
				{
					k++;
				}	
			}	
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
	int size,i,x;
	printf("C program to find triplet in the array which sums up to a given integer X :- \n");
	printf("Enter size of an array:- ");
	scanf("%d" , &size);
	int ar[size];
	printf("Enter array elements :- ");
	for(i=0;i<size;i++)
	{
		scanf("%d" , &ar[i]);
	}
	printf("Array elements :- ");
	printArray(ar,size);
	printf("\nEnter the value for X :- ");
	scanf("%d" , &x);
	findTriplet(ar,size,x);
}
