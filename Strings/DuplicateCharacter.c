#include<stdio.h>
#include<string.h>
void findDuplicates(char str[])  
{    
    int i,j,count;
    int length = strlen(str);
    printf("\nLength of %s is %d" , str , length);
    for(i=0 ; i<length ; i++)
    {
    	count=1;
    	for(j=i+1 ; j<length ; j++)
    	{
    		if(str[i] == str[j] && str[i] != ' ' && str[i] != '0') 
    		{
    			count++;
    			str[j] = '0';	// setting reapeated one to 0 so that they cannot be count again;
			}
		}
		if(count>1)
		{
			printf("\n%c appears %d times " , str[i] , count);
		}
		
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
	char str[100]; 
	printf("Enter string to find duplicates :- " );
	fgets(str , sizeof(str) , stdin);
//    scanf( "%s" , str);
	printf("The string is :- %s" , str);
	findDuplicates(str);
}
