#include<stdio.h>
#include<string.h>
void reverse(char arr[])  
{  
    int i;
	char temp;  
    int size = strlen(arr); 
//    printf("Size :- %d" , strlen(arr));  
//	printf("Size :- %d" , sizeof(arr));
    int start=0;
	int end=size-1;
    while (start < end)
    {
        temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }  
    printf("Reverse is :- %s" , arr);
}
void main()
{
	char str[100]; 
	printf("Enter something to reverse:- " );
	fgets(str , sizeof(str) , stdin);
	printf("The string is :- %s" , str);
	reverse(str);
}
