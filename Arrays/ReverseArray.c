#include<stdio.h>
// Normal Function
void reverse(int ar[] , int start , int end)
{
	int temp;
	while(start<end)
	{
		temp = ar[start];
		ar[start] = ar[end];
		ar[end] = temp;
		start++;
		end--;
	}
}
/*	Recursive Function 
void reverse(int ar[] , int start , int end)
{
	int temp;
	if(start>end)
		return;
	temp = ar[start];
	ar[start] = ar[end];
	ar[end] = temp;
	reverse(ar,start+1,end-1);
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
	int size,i;
	printf("C program to reverse an array\n");
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
	reverse(ar , 0 , size-1);
	printf("\nReverse array elements :- ");
	printArray(ar,size);
}
