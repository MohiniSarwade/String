//Given a string 's'. The task is to find the smallest window length that contains all the characters of the given string at least one time.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int minString(string s)
{
    int n=s.length();
    if(n==0)
        return 0;
    set<char>st;
    for(int i=0;i<s.length();i++)
        st.insert(s[i]);
    
    int Min=st.size();
    int ans=INT_MAX;
    int count=0;
    int CharCount[256]={0};
    int start=0,str_Index=-1;
    for(int i=0;i<n;i++)
    {
        CharCount[s[i]]++;
        if(CharCount[s[i]]==1)
            count++;
        if(count==Min)
        {
            while(CharCount[s[start]]>1)
            {
                if(CharCount[s[start]]>1)
                    CharCount[s[start]]--;
                start++;
            }
            int len=i-start+1;
            if(len<ans)
                ans=len;
        }
    }
    return ans;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    cout<<minString(s)<<endl;
	}
	return 0;
}
