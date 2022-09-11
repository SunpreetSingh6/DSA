#include<iostream>
using namespace std;

string removeAllOccurrences(string str , string part)
{
	while(str.length()!=0 && str.find(part)<str.length())		// while(str.find(part)!=-1)
	{
		cout<<str.find(part)<<" ";
		str.erase(str.find(part),part.length());
	}
	return str;
}

int main()
{
	string str,part;
	cout<<"Enter the string to remove all occurrences of the 2nd string:- ";
	getline(cin,str);
	cout<<"Enter string which should be removed from main string:- ";
	getline(cin,part);
	cout<<removeAllOccurrences(str,part);
	return 0;
}

// input 1 :- daabcbaabcbc
// input 2 :- abc
// ans :- dab
