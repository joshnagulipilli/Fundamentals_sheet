//identifying palindromes
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])  
        {
            flag=1;
            cout<<"Not Palindrome";
            break;
        }
    }
    if(!flag) cout<<"Palindrome"<<endl;

}