#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;

    }
    return true;
}

int main()
{
    int x,y;
    cin>>x>>y;
    vector<int>ans;
    for(int i=x;i<=y;i++)
    {
        if(isprime(i)) ans.push_back(i);
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}