#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,target;
   cin>>n>>target;
   vector<int>v(n);
   vector<pair<int,int>>ans;
   for(int i=0;i<n;i++) cin>>v[i];
   unordered_map<int,int>mp;
   for(int i=0;i<n;i++)
   {
     int t = target - v[i];
     if(mp.find(t)!=mp.end())
     {
        ans.push_back({t,v[i]});
     }
     else{
        mp[v[i]]++;
     }
   }
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i].first<<" "<<ans[i].second<<endl;
   }
}
