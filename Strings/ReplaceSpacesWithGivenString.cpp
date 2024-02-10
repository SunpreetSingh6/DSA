#include <iostream>
using namespace std;

string replaceSpaces(string &str){
	int l = str.length();
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            str = str.substr(0,i)+"@40"+str.substr(i+1,str.length()-1);    
        }
        i++;
    }
    return str;
}
/*
string replaceSpaces(string &str)			// Note taking string's address so that it changes the actual string.
{	
	// Write your code here.
    int l = str.length();
    string rep = "@40";
    for(int i = 0; i<l ; i++)
    {
        if(str[i]==' ')
        {
            str.replace(i,1,rep);		// At ith position replacing 1 character(space) with @40.
        }
    }
    return str;
}
*/
int main()
{
    string str = "My name is John";
    cout<<replaceSpaces(str)<<endl;
//    str.replace(3,4,"sunpreetsingh");		// If &str is not used then it will not affect the main string.
//    cout<<str;
    return 0;
}

