#include<iostream>
using namespace std;
int main()
{
	int num,reverse,rem;
	cout<<"Enter number to reverse"<<endl;
	cin>>num;
	while(num!=0)
	{
		rem = num%10;
		reverse = (reverse*10) + rem;
		num = num/10; 
	}
	cout<<"Reverse is :- ";
	cout<<reverse;
	return 0;
}
