#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s; //getline(cin,s);
    string p;
    for(int i=s.length();i>=0;i--)
    {
        p+=s[i];
    }
    cout<<p;

    // reverse(s.begin(),s.end());
   
}