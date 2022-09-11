#include<iostream>
using namespace std;
bool checkEqual(int count1[] , int count2[])
{
	for(int i=0 ; i<26 ; i++)
	{
		if(count1[i] != count2[i])
			return 0;
	}
	return 1;
}
bool checkPresentOrNot(string s1 , string s2)
{
	int count1[26] = {0},count2[26] = {0};
	// Storing number of times a variable occurring in a string s1
	for(int i=0;i<s1.length();i++)
	{
		int index = s1[i] - 'a';
		count1[index]++;
	}
	
	// Creating a window of s1 length which will traverse over the main string s2
	int i=0;
	int windowSize = s1.length();
	 
	// Storing number of times a variable occurring in a string s2 for first window.
	while(i < windowSize && i < s2.length())
	{
		int index = s2[i] - 'a';
		count2[index]++;
		i++;
	}
	// Checking if both the arrays having the same elements ; If yes then return true means permutation of s1 is present in s2
	if(checkEqual(count1 , count2))
		return 1;
		
	while(i<s2.length())
	{
		int newCharIndex = s2[i] - 'a';
		count2[newCharIndex]++;
		
		int OldCharIndex = s2[i-windowSize] - 'a';
		count2[OldCharIndex]--;
		
		i++;
		
		if(checkEqual(count1 , count2))
			return 1;
	}
	
	return 0;
	
}
int main()
{
	string s1,s2;
	cout<<"Program to check if permutation of string s1 is present in string s2\n";
	cout<<"Enter string s1 whose permutations need to be checked in s2:- ";
	getline(cin,s1);
	cout<<"Enter string s2 in which permutations is to be checked :- ";
	getline(cin,s2);
	cout<<checkPresentOrNot(s1,s2);
	return 1;
}
