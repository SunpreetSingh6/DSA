#include<iostream>
using namespace std;
int main()
{
	int size,i=-1,pivot=0;
	cout<<"Program to move all negative elements of an array to one side"<<endl;
	cout<<"Enter array size :- ";
	cin>>size;
	int ar[size];
	for(int i=0;i<size;i++)
		cin>>ar[i];
	cout<<"Result"<<endl;
	for(int j=0 ; j<size ; j++)
		if(ar[j]<pivot)
		{
			i++;
			swap(ar[i] , ar[j]);
		}
	for(int i=0;i<size;i++)	
		cout<<ar[i]<<" ";
	return 0;
}
