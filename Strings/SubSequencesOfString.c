#include<stdio.h>
#include<string.h>
void subSequence(char arr[])  
{    
    int i,j;
    int length = strlen(arr);
//    printf("\nLength of %s is %d" , arr , length);
    for(i=0 ; i<length ; i++)
    {
    	for(j=i ; j<length ; j++)
    	{
    		// Not Completed
    		printf("%c" , arr[j]);
		}
		printf("\n");
	}
//	if(flag)
//	{
//		printf("\n%s is not a palindrome" , arr);
//	}
//	else
//	{
//		printf("\n%s is a palindrome" , arr);
//	}	
}
void main()
{
	char arr[100]; 
	printf("Enter string to find all subsequence of it:- " );
//	fgets(arr , sizeof(arr) , stdin);
    scanf( "%s" , arr);
	printf("The string is :- %s \n" , arr);
	subSequence(arr);
}
