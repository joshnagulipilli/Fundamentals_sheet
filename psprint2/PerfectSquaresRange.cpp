#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n)
{
     for(int i=2;i<=n/2;i++)
     {
        if(i*i==n) return true;
     }
     return false;
}

int main()
{
   int x,y;
   cin>>x>>y;
   vector<int>v;
   for(int i=x;i<=y;i++)
   {
       if(i==1) 
       {
           v.push_back(1);
           continue;
       }
    if(isPerfect(i))
        v.push_back(i);
   }
   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" ";
   }
}
