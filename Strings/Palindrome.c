#include<stdio.h>
#include<string.h>
void palindrome(char arr[])  
{    
    int i,flag=0;
    int length = strlen(arr);
    printf("\nLength of %s is %d" , arr , length);
    for(i=0 ; i<length/2 ; i++)
    {
    	if(arr[i] != arr[length-i-1])
    	{
    		flag=1;
    		break;
		}
	}
	if(flag)
	{
		printf("\n%s is not a palindrome" , arr);
	}
	else
	{
		printf("\n%s is a palindrome" , arr);
	}	
}
void main()
{
	char arr[100]; 
	printf("Enter something to check if it is palindrome or not:- " );
//	fgets(arr , sizeof(arr) , stdin);
//    scanf( "%s" , arr);
	gets(arr);
	printf("The string is :- %s" , arr);
	palindrome(arr);
}
