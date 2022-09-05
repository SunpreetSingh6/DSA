#include<stdio.h>
void findCommon(int ar1[],int ar2[],int ar3[],int size1,int size2,int size3)
{
	int i=0,j=0,k=0;
	printf("\nCommon elements are :- ");
	while(i<size1 && j<size2 && k<size3)
	{
		if(ar1[i] == ar2[j] && ar2[j] == ar3[k])
		{
			printf("%d \t" , ar1[i]);
			i++;
			j++;
			k++;
		}
		else if(ar1[i] < ar2[j])
		{
			i++;
		}
		else if(ar2[j] < ar3[k])
		{
			j++;
		}
		else
		{
			k++;
		}
	}
}
void printArray(int ar[] , int size)
{
	int i;
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t" , ar[i]);
	}
}
void main()
{
	int size1,size2,size3,i;
	printf("C program to find common elements from 3 sorted arrays :- \n");
	
	printf("Enter size of 1st array :- ");
	scanf("%d" , &size1);
	int ar1[size1];
	printf("Enter 1st array elements :- ");
	for(i=0;i<size1;i++)
	{
		scanf("%d" , &ar1[i]);
	}
	
	printf("Enter size of 2nd array :- ");
	scanf("%d" , &size2);
	int ar2[size2];
	printf("Enter 2nd array elements :- ");
	for(i=0;i<size2;i++)
	{
		scanf("%d" , &ar2[i]);
	}
	
	printf("Enter size of 3rd array :- ");
	scanf("%d" , &size3);
	int ar3[size3];
	printf("Enter 3rd array elements :- ");
	for(i=0;i<size3;i++)
	{
		scanf("%d" , &ar3[i]);
	}
	printf("Array elements :- ");
	printArray(ar1,size1);
	printArray(ar2,size2);
	printArray(ar3,size3);
	findCommon(ar1,ar2,ar3,size1,size2,size3);
}

