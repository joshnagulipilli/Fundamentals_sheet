#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    vector<int>ans;
    for(int i=x;i<=y;i++)
    {
        int cnt=0,x=i,temp=i,r,r1;
    while(x>0)
    {
        r=x%10;
        cnt++;
        x/=10;
    }
    // cout<<cnt<<" ";
    int res=0;
    while(temp>0)
    {
        r1=temp%10;
        res+=(pow(r1,cnt));
        temp/=10;
    }
        if(res==i) ans.push_back(res);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}