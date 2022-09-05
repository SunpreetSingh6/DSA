#include<stdio.h>
void minJumps(int ar[] , int size)
{
	int i,jumps=0,index=0;
	for(i=0;i<size-1;)
	{
		index+=ar[i];
		if(index<size)
		{
			i=index;
			jumps++;
		}
		else{
			i=size-1;
			jumps++;
		}
	}
	printf("\nMinimum no. of jumps to reach the end of an array:- %d" , jumps);
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
	printf("C program to find minimum number of jumps to reach the end of an array :- \n");
	printf("Enter size of an array :- ");
	scanf("%d" , &size);
	int ar[size];
	printf("Enter array elements(except 0) :- ");
	for(i=0;i<size;i++)
	{
		scanf("%d" , &ar[i]);
	}
	printf("Array elements :- ");
	printArray(ar,size);
	minJumps(ar,size);
}
