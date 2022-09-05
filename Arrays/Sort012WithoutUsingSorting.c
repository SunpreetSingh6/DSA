#include<stdio.h>
/*
void sort(int ar[] , int size)
{
	int i=0,zero=0,one=0,two=0;
	while(i<size)
	{
		if(ar[i]==0)
		{
			zero += 1;
		}
		else if(ar[i]==1)
		{
			one += 1;
		}
		else
		{
			two += 1;
		}
		i++;
	}
	printf("\nNumber of zero's:-%d , one's:-%d and two's:-%d" , zero , one, two );
	for(i=0;i<zero;i++)
	{
		ar[i] = 0;
	}
	for(i=zero;i<zero+one;i++)
	{
		ar[i] = 1;
	}
	for(i=(zero+one);i<size;i++)
	{
		ar[i] = 2;
	}
	
}
*/
void sort(int ar[] , int size)
{
	int mid=0,low=0,high=size-1,temp=0;
	for(mid=0;mid<=high;)
	{
		if(ar[mid] == 0)
		{
			temp = ar[mid];
			ar[mid] = ar[low];
			ar[low] = temp;
			mid++;
			low++;
		}
		else if(ar[mid] == 2)
		{
			temp = ar[mid];
			ar[mid] = ar[high];
			ar[high] = temp;
			high--;
		}
		else{
			mid++;
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
	printf("C program to sort an array consisting 0 1 and 2 without using sorting\n");
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
	sort(ar,size);
	printf("\nArray elements after sorting 0 1 and 2 :- ");
	printArray(ar,size);
}
