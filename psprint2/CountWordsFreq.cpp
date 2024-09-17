#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   map<string,int>mp;
   string p="";
   for(int i=0;s[i];i++)
   {
       if(s[i]!=' ')
       {
           p+=s[i];
       }
       else{
           mp[p]++;
           p.erase();
       }
   }
   if(p!="")
   {
       mp[p]++;
   }
   string max_str="";
   int len=0;
   for(auto it:mp)
   {
       cout<<it.first<<" "<<it.second<<endl;
    if(len<it.second)
    {
        max_str=it.first;
        len=it.second;;
    }
   }
   cout<<len;
}