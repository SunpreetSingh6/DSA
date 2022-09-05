#include<stdio.h>
int subSetArray(int ar1[], int ar2[],  int m, int n) 
{ 
    int i = 0; 
    int j = 0; 
    for (i = 0; i < n; i++) 				// O(n^2)
    { 
        for (j = 0; j < m; j++) 
        {                        
            if(ar2[i] == ar1[j]) 
                break; 
        } 
          
        /* If the above inner loop was 
        not broken at all then arr2[]
        is not present in arr1[] */
        if (j == m)   
            return 0; 
    } 
      
    /* If we reach here then all 
    elements of arr2[] are present 
    in arr1[] */
    return 1;
} 
 
// We can also use one more approch  -> First sort both the arrays and use a while loop while(i<n && j<m){ if(ar[i]==ar[j]){i++,j++} else if(ar[i]<ar[j]{i++} else j++ }
// this will result in O(nlogn + mlogm)

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
	int size1,size2,i,k;
	printf("C program to find array a2 is Subset of another array a1 \n");
	printf("Enter size of an array a1 :- ");
	scanf("%d" , &size1);
	int ar1[size1];
	printf("Enter array elements :- ");
	for(i=0;i<size1;i++)
	{
		scanf("%d" , &ar1[i]);
	}
	
	printf("Enter size of an array a2 :- ");
	scanf("%d" , &size2);
	int ar2[size2];
	printf("Enter array elements :- ");
	for(i=0;i<size2;i++)
	{
		scanf("%d" , &ar2[i]);
	}
	
	printf("Array elements of a1:- ");
	printArray(ar1,size1);
	printf("\nArray elements of a2:- ");
	printArray(ar2,size2);
	int result = subSetArray(ar1,ar2,size1,size2);
	if(result)
	{
		printf("\nSubtset");
	}
	else
	{
		printf("\nNot Subtset");
	}
}
