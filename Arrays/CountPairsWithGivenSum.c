#include<stdio.h>

//Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

//Input:
//N = 4, K = 6
//arr[] = {1, 5, 7, 1}
//Output: 2
//Explanation: 
//arr[0] + arr[1] = 1 + 5 = 6 
//and arr[1] + arr[3] = 5 + 1 = 6.

//N = 4, K = 2
//arr[] = {1, 1, 1, 1}
//Output: 6
//Explanation: 
//Each 1 will produce sum 2 with any 1.

void findPairs(int ar[] , int size , int num)
{
/* 		Time complexity :- O(n^2);	
	int i,j,pairs;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if( ar[i]+ar[j] == num)
			{
				pairs++;
			}
		}	
	}
	printf("\nTotal number of pairs are :- %d" , pairs);
*/

/*	 Time Complexity :- O(nlogn)

	sort(nums, nums + n);		// sort fn takes O(nlogn)
    int low = 0;
    int high = n - 1;
    int count=0;
    while (low < high)
    {
        if (nums[low] + nums[high] == target)
        {
            count++;
//            cout << "Pair found (" << nums[low] << ", " << nums[high] << ")\n";
        }
        (nums[low] + nums[high] <= target)? low++: high--;
    }

    return count;
*/
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
	int size,i,num;
	printf("C program to find the number of pairs whose sum is equals to given number :- \n");
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
	printf("\nEnter the number whose pairs to find :- ");
	scanf("%d" , &num);
	findPairs(ar,size,num);
}
