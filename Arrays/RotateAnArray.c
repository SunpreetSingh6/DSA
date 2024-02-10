#include<stdio.h>
void rotateArray(int ar[] , int size , int n)
{
	/*	Not working right
	
	int i,j,temp,count=0;
	for(count=0 ; count<n ; count++)
	{
		for(i=0;i<size-1;i++)
		{
			temp = ar[i];
			ar[i] = ar[i+1];
			ar[i+1] = temp;
		}
		printArray(ar,size);
	}
	*/
	
	/*	Rotate an array by 1;
		
		n is size of an array.
		int x = ar[n-1];
		for(int i=n-1 ; i>0 ; i++)
			ar[i] = ar[i-1];
		ar[0] = x;
	*/
	
	
	
	// 	ROTATING array by right in below examples :- Rotating right means rotate right 'k' to begin; 
	
	
	
	/*		// ar = 1 2 3 4 5 6 7 , n=3 , sol = 5 6 7 1 2 3 4 ;
			// TC :- O(n) ; SC :- O(1)
	
	n = n%nums.size();						// checking if n < size of arr i.e n=3 ,size=7  ->> 3%7=3 ;
    if(n==0)								// if n=7 , size=7 ->> 7%7=0 i.e No need to rotate. 
        return ;
    reverse(nums.begin() , nums.end()-n);	// ar = 4 3 2 1 5 6 7
    reverse(nums.end()-n , nums.end());		// ar = 4 3 2 1 7 6 5
    reverse(nums.begin() , nums.end());		// ar = 5 6 7 1 2 3 4
    
    			OR
    
    reverse(nums.begin() , nums.end());		// ar = 7 6 5 4 3 2 1
    reverse(nums.begin() , nums.begin()+k); // ar = 5 6 7 4 3 2 1
    reverse(nums.begin()+k , nums.end());   // ar = 5 6 7 1 2 3 4
    
    */
	
	/* Cyclic rotate
		// TC :- O(n)
	    // SC :- O(n)
    
    vector<int> temp(nums.size());
    for(int i=0 ; i<nums.size() ; i++)
    {
        temp[(i+k)%nums.size()] = nums[i];
    }
    nums = temp;
	*/
	
	/*
	Time Complexity :- O(n);
	Space Complexity :- O(n);
	cout<<"Rotate array by k"<<endl;
    int ar[] = {1,2,3,4,5};
    int size = sizeof(ar)/sizeof(ar[0]);
    int k;
    cin>>k;
    k=k%size;
    int sol[size];
    int j=0;
    for(int i=size-k ; i<size ; i++)
    {
        sol[j++] = ar[i];
    }
    for(int i=0 ; i<k ; i++)
    {
        sol[j++] = ar[i];
    }
    
    for(auto i : sol)
    {
        cout<<i<<" ";
    }
	
	//		ROTATING array by left in below examples :- Rotating left means rotate 'k' starting elements to last
	
	void Rotate(int arr[], int d, int n)
	{
		TC :- O(n) , SC :- O(n)
	    int temp[n];
	    int k = 0;
	    for (int i = d; i < n; i++) {
	        temp[k] = arr[i];
	        k++;
	    }
	    for (int i = 0; i < d; i++) {
	        temp[k] = arr[i];
	        k++;
	    }
	    for (int i = 0; i < n; i++) {
	        arr[i] = temp[i];
	    }
	}
	
	
	
	
	
	*/
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
