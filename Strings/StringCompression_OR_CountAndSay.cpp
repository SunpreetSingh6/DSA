#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*
int compress(string str)
{
	vector<char> temp;
	int count=1;
	for(int i=1 ; i<str.length()+1 ; i++)
	{
		if(str[i]==str[i-1])
		{
			count++;
		}
		else
		{
//			printf("%d %c\t" , count , str[i-1]);
			if(count>1)
			{
				temp.push_back(str[i-1]);
				if(count>9)
				{
					while(count!=0)
					{
						int rem = count%10;
						temp.push_back(rem+'0');		// Storing in reverse order i.e 31 or 21 instead of 13 or 12
						count = count/10;
					}
				}
				else
					temp.push_back(count+'0');			// Converting int to char
			}
			else
			{
				temp.push_back(str[i-1]);	
			}
			count = 1;
		}
	}
	cout<<"c\Compressed string is :-";
	for(vector<char>::iterator itr=temp.begin();itr!=temp.end();++itr)  
	{
		cout<<*itr;	
	}	
	
	cout<<endl;
	return temp.size();
}
*/

int compress(vector<char> ch)
{
	int i = 0;
	int ansIndex = 0;
	int n = ch.size();
	while(i<n)
	{
		int j=i+1;
		while(j<n && ch[i] ==ch[j])
		{
			j++;
		}
		
		// we come here when the full vector is traversed or when we find any different character as compare to previous one 
		ch[ansIndex++] = ch[i];
		int count = j-i;
		
		if(count>1)
		{
			string cnt = to_string(count);
			for(char c : cnt)
			{
				ch[ansIndex++] = c;
			}
		}
		i=j;
	}
	
	for(char c : ch)
	{
		cout<<c<<" ";
	}
	
	return ansIndex;
}

int main()
{
//	string str;
	cout<<"Program to print compressed string of a given string\n";
//	cout<<"Enter string to compress it :- ";
//	getline(cin,str);
//	cout<<compress(str);

//	cout<<compress({'a','a','a','b','c','c','c','c','d','d'});
	cout<<compress({'a','a','a','b','c','c','c','c','c','c','c','c','c','c','c','c','d','d'});
	
	return 1;
}
