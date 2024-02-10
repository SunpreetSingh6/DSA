#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr1[] = {1, 5, 9, 10, 15, 20};
    int arr2[] = {2, 3, 8, 13};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
//    int i, k;
/*    
	Time Complexity = O(n*m)
	
    for (i = 0; i < n; i++) 
	{
    	if (arr1[i] > arr2[0]) 
		{
	      int temp = arr1[i];
	      arr1[i] = arr2[0];
	      arr2[0] = temp;
    	}
    	// Insertion Sort
	    int first = arr2[0];
	    for (k = 1; k < m && arr2[k] < first; k++) 
		{
	      arr2[k - 1] = arr2[k];
	    }
	    arr2[k - 1] = first;
    }
*/

//	Time Complexity :- O((n+m)log(n+m))

	int i=n-1,j=0;
    while(i>=0 && j<m)
    {
        if(arr2[j]<arr1[i])
        {
            swap(arr2[j],arr1[i]);
            j++;
            i--;
        }
        else
        {
            j++;
        }
    }
    sort(arr1,arr1+n);		// Sort function will take O(nlogn)
    sort(arr2,arr2+m);
	
    for(int a : arr1)
    {
        cout<<a<<" "; 
    }
    cout<<endl;
    for(int a : arr2)
    {
        cout<<a<<" "; 
    }    
    return 0;
}

