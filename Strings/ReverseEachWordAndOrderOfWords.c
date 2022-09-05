#include<stdio.h>
#include<string.h>

/*
		3 types of reversing :- Normally reversing the string , reverse each word of the string , reverse the order of words(combo of previous 2)
*/

void reverseEachWordOfString(char arr[])  			// you are great -> uoy era taerg
{    
    int i,j=0,k=0,temp;
    int length = strlen(arr);
    for(i=0 ; i<length ; i++)
    {
    	if(arr[i] == ' ' || arr[i+1] == '\0')
		{
			k=(arr[i]==' ' ? i-1 : i);
			while(j<k)
			{
				temp = arr[j];  
		        arr[j] = arr[k];
		        arr[k] = temp;
		        j++;
		        k--;
			}
			j=i+1;
		}
	}
	printf("String after reversing each word :- %s \n" , arr);
}

void reverseOrderOfWords(char arr[])  			// you are great -> great are you.
{    
    int i,j,k,temp;
    int length = strlen(arr);
    i=0;
	j=length-1;
	while(i<j)									// Normally reversing the string   ->   taerg era uoy
	{											// After doing this yee can again uisng reverseEachWordOfString(char arr[]) function.
		temp = arr[i];									
		arr[i] = arr[j] ;
		arr[j] = temp;
		i++;
		j--;
	}
	
	for(i=j=0;i<length;i++)						// reverseEachWordOfString(char arr[]) function .
	{
		if(arr[i]==' ' || arr[i+1]== '\0')
		{
			k = (arr[i]==' '? i-1 : i);
			while(j<k)
			{
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
				k--;
				j++;
			}
			j=i+1;
		}
	}
	printf("\nString after reversing the order of words :- %s" , arr);
}


void main()
{
	char arr[100],ar[100]; 
	printf("Enter string to find all subsequence of it:- " );
//	fgets(arr , sizeof(arr) , stdin);
    gets(arr);
    strcpy(ar,arr);			// 2 operation on a single string will produce uncertain results;
	printf("The string is :- %s \n" , arr);
	reverseEachWordOfString(arr);			
	reverseOrderOfWords(ar);
}
