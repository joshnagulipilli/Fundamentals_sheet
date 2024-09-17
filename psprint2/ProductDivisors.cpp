#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x,y;
   cin>>x>>y;
   int prod=x*y;
   vector<int>ans;
   for(int i=1;i<=prod;i++)
   {
    if(prod%i==0)
    {
        ans.push_back(i);
    }
   }
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
}