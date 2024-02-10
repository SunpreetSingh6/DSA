#include<iostream>
#include<set>
using namespace std;

class Solution
{
public:
    int countPalindromicSubsequence(string s)
    {
        int first[26] = {100001}, last[26] = {}, res = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            first[s[i] - 'a'] = min(first[s[i] - 'a'], i);
            last[s[i] - 'a'] = i;
        }
        for (int i = 0; i < 26; ++i)
            if (first[i] < last[i])
                res += set<char>(begin(s) + first[i] + 1, begin(s) + last[i]).size();
        return res;
    }
};

int main()
{
	cout<<"Program to print unique palindrome of length 3 in a string "<<endl;
	Solution s;
	cout<<s.countPalindromicSubsequence("aabca");
	cout<<s.countPalindromicSubsequence("adc");
	cout<<s.countPalindromicSubsequence("bbcbaba");
}
