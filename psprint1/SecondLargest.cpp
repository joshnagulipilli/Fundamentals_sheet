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
    int fmax=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        if(fmax<v[i])
        {
            smax=fmax;
            fmax=v[i];
        }
    }
    cout<<smax;



    // sort(v.begin(),v.end());
    //cout<<v[n-2];
}