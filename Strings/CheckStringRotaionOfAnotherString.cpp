#include <iostream>
#include <queue>

using namespace std;
/*
bool checkRotation(string s1 , string s2)
{
    // Time Complexity :- O(n^2);
    
    int len1 = s1.length();
    int len2 = s2.length();
    if(len1!=len2)
    {
        return false;
    }
    for(int i=0 ; i<len1 ; i++)
    {
    	//	Rotatiting string by 1 and then checking
        char temp = s2[len2-1];
        for(int j=len2-1 ; j>0 ; j--)
        {
            s2[j] = s2[j-1];
        }
        s2[0] = temp;
        
        if(s1==s2)
        {
            return true;
        }
    }
    return false;
}
*/
/*
bool checkRotation(string s1 , string s2)
{
	//	Time Complexity :- O(n^2);
	
	int len1 = s1.length();
    int len2 = s2.length();
    if(len1!=len2)
        return false;
    queue<char> ch1;
    for(int i=0 ; i<len1 ; i++)
    {
    	ch1.push(s1[i]);
	}
    // Will rotate 2nd queue and check both are equal or not    
    queue<char> ch2;
    for(int i=0 ; i<len2 ; i++)
    {
    	ch2.push(s2[i]);
	}    
	// rotating queue and checking
	int t = len2;
	// Will run only t time which is len of s2;
	while(t--)
	{
		char ch = ch2.front();
		ch2.pop();
		ch2.push(ch);
		
		if(ch1 == ch2)
		{
			return true;
		}
	}
	return false;
}
*/
bool checkRotation(string s1 , string s2)
{
	//	Time Complexity :- O(n);
	
	int len1 = s1.length();
    int len2 = s2.length();
    if(len1!=len2)
        return false;
    string temp = s1+s1;
    return (temp.find(s2) != string::npos);
    
    // string::npos actually means until the end of string
}

int main()
{
    cout<<"Hello World"<<endl;
    string s1 = "ABCD";
    string s2 = "CDAB";		// Wrong CADB , CBAD
    cout<<checkRotation(s1,s2);

    return 0;
}

