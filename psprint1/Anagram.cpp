#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     string p;
     cin>>p;
     char arr[26]={0};
     for(int i=0;i<s.length();i++)
     {
         arr[s[i]-'a']++;
     }     
     int c=1;
     for(int i=0;i<p.length();i++)
     {
        if(arr[p[i]-'a']==0)
        {
            cout<<"False";
            c=0;
            break;
        }
     }
      if(c==1) cout<<"True";
}