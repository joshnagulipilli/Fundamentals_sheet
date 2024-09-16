#include<bits/stdc++.h>
using namespace std;

vector<int> fun(int n,vector<int>& v)
{
   if(n<=1) {
    v.push_back(n);
    return v;
   }

    else 
    {
     fun(n-1,v);
     v.push_back(v[n-1]+v[n-2]);
    }
    return v;
}

int main()
{
     int n;
     cin>>n;
     vector<int>v;
     fun(n,v);
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
}