#include<iostream>
using namespace std;

void removeAdjacentDuplicates(string &str)
{
	int i=0;
	while(str[i] != '\0')			// while( i<str.length() )
	{
		if(str[i] == str[i+1])
		{
			str.erase(i,2);
			i--;					// Decrementing i to check previous pair i.e 'aa' from 'aaca' after deleting 'bb' from 'abbaca'.  
		}
		else
		{
			i++;			
		}		
	}
}

int main()
{
	string str;
	cout<<"Program to remove adjacent duplicates\n";
	cout<<"Enter string to remove all adjacent duplicates :-";
	getline(cin,str);													//  Examples :- abbaca -> ca , azxxzy -> ay
	removeAdjacentDuplicates(str);
	cout<<str;
	return 0;	
}
