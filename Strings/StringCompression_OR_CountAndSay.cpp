#include<iostream>
#include<vector>
using namespace std;

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

int main()
{
	string str;
	cout<<"Program to print compressed string of a given string\n";
	cout<<"Enter string to compress it :- ";
	getline(cin,str);
	cout<<compress(str);
	return 1;
}
