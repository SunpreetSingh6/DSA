#include<stdio.h>
void max_min(int ar[] , int size)
{
	int max,min,i;
	if(size==1)
	{
		max=ar[size];
		min=ar[size];
	}
	else
	{
		max,min=ar[0];
		for(i=1;i<size;i++)
			if(ar[i]>max)
				max=ar[i];
			else if(ar[i]<min)
				min=ar[i];	
	}
	printf("\nMaximum is %d and minimum is %d" ,max,min);
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
	max_min(ar,size);
}
