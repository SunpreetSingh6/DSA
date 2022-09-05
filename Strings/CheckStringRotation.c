#include<stdio.h>
#include<string.h>
void checkRotation(char str1[] , char str2[])  
{    
    int i,j,temp,c,flag;
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    printf("\nLength of %s is %d and %s is %d" , str1 , length1, str2 , length2);
    if(length1!=length2)
    {
    	printf("Don'/t  have same size");
	}
	else
	{
		for(i=0 ; i<length1 ; i++)
    	{	
    		c=0;
    		flag=0;
    		for(j=0;j<length1-1;j++)
			{
				temp = str1[j];
				str1[j] = str1[j+1];
				str1[j+1] = temp;
			}
			printf("\nString becomes :- %s" ,str1);
			while(c<length1)
			{
				if(str1[c] == str2[c])
				{
					c++;
					flag=1;
				}
				else
				{
					flag=0;
					break;
				}
					
			}
//			printf("\nFlag :- %d" , flag);
			if(flag)
			{
				printf("\nTrue");
				break;
			}
			else
			{
//				printf("\nFalse");
				continue;
			}
		}	
	}
}
void main()
{
	char str1[100],str2[100]; 
	printf("Enter string to check whether the string s1 has rotation of other string s2 :- " );
//	fgets(str1 , sizeof(str1) , stdin);
	scanf( "%s" , str1);
	printf("Enter string s2 :- " );
//	fgets(str2 , sizeof(str2) , stdin);
    scanf( "%s" , str2);
	printf("The strings are :- %s and %s" , str1 , str2);
	checkRotation(str1,str2);
}
