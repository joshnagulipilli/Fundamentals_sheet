#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int sum=0;
    for(int i=x;i<=y;i++)
    {
        sum+=((i%2==1)?i:0);
    }
    cout<<sum;
}