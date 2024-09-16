#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    //using map
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
    }
    int maxi=-1,ans=0;
    for(auto it:mp)
    {
        if(maxi<it.second)
        {
            ans=it.first;
            maxi=it.second;
        }
    }
    cout<<ans;
}