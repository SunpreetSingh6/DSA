/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}

int main()
{
    cout<<"Pascal Triangle"<<endl;
    cout<<"Enter number of rows:- "<<endl;
    int n;
    cin>>n;
    vector<vector<int>> vec;
    for(int i=0 ; i<n ; i++)
    {
        vector<int> v;
        for(int j=0 ; j<=i ; j++)
        {
            int val = fact(i)/(fact(j)*fact(i-j)) ;
            v.push_back(val);
        }
        vec.push_back(v);
    }

    for(auto i : vec)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
