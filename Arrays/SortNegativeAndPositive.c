#include<stdio.h>
/*
void moveNegative(int ar[] , int size)
{
	int i=0,j=1,temp;
	while(j<size)
	{
		if(ar[j]<0 && ar[i]>0)
		{
			temp = ar[i];
			ar[i] = ar[j];
			ar[j] = temp;
			i++;
		}
		else if(ar[j]<0 && ar[i]<0)
		{
			i++;
		}
		j++;
		
	}
}
*/
void moveNegative(int ar[] , int size)
{
	int j=-1,i,temp;
	for(i=0;i<size;i++)
	{
		if(ar[i]<0)
		{
			j++;
			temp = ar[i];
			ar[i] = ar[j];
			ar[j] = temp;
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
	int size,i;
	printf("C program to move all negative numbers to one side of an array\n");
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
	moveNegative(ar,size);
	printf("\nArray elements after moving negative numbers to one side :- ");
	printArray(ar,size);
}
