
#include<stdio.h>
void rotateArray(int ar[] , int size , int n)
{
	int i,j,temp,count=0;
	while(count<n)
	{
		for(i=0;i<size-1;i++)
		{
			temp = ar[i];
			ar[i] = ar[i+1];
			ar[i+1] = temp;
		}
		count++;
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
	int size,i,n;
	printf("C program to rotate an array in clockwise direction by n");
	printf("\nEnter the size of array:- ");
	scanf("%d" , &size);
	int ar[size];
	printf("\nEnter the no. of elements by which you want to rotate the array :- ");
	scanf("%d" , &n);
	printf("\nEnter array elements:-");
	for(i=0;i<size;i++)
	{
		scanf("%d" , &ar[i]);
	}
	printf("\nEntered array elements are :- ");
	printArray(ar,size);
	rotateArray(ar,size,n);
	printf("\nRotated array is :- ");
	printArray(ar,size);
}
