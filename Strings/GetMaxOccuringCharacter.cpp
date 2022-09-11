#include<iostream>
using namespace std;
char getMaxOccuringChar(string str)
{
	int ar[26] = {0};
	for(int i=0 ; str[i]!='\0'; i++)		// for(int i=0 ; i<tr[i]!=str.length(); i++)
	{
		char ch = str[i];
		int num=0;
		if(ch >= 'a' && ch<='z')
		{
			num = ch - 'a';
		}
		else
		{
			num = ch - 'A';	
		}
		ar[num]++;
	}
	int max=-1,max_index=0;
	for(int i=0;i<26;i++)
	{
		if(ar[i]>max)
		{
			max = ar[i];
			max_index = i;
		}
//		cout<<ar[i]<<" ";
	}
	char ch = max_index + 'a';
	return ch;
}

int main()
{
	string str;
	cout<<"Enter string:-";
	cin>>str;
	cout<<getMaxOccuringChar(str);
	return 0;
}
