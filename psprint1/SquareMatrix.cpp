#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m;
     cin>>n>>m;
     int p=1;
     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=m;j++)
        {
            cout<<p<<" ";
            p++;
        }
        cout<<endl;
     }
}