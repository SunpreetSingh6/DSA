#include<stdio.h>
#include<string.h>
void countAndSay(char s[])
{
	int i,count=1;
	int length = strlen(s);
	for(i=1;i<length+1;i++)
	{
		if(s[i]==s[i-1])
		{
			count++;
		}
		else
		{
			printf("%d %c\t" , count , s[i-1]);
			count=1;
		}
	}
}
void main()
{
	char s[40];
	printf("Enter string :- ");
	gets(s);
	countAndSay(s);
}
