#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int a;
    while(cin>>a)
    {
        v.push_back(a);
    }
    int fmin=INT_MAX;
    int smin=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        if(fmin>v[i])
        {
            smin=fmin;
            fmin=v[i];
        }
    }
    cout<<smin;
    // sort(v.begin(),v.end());
    //cout<<v[n-2];
}