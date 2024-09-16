#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r,res=0;
    int temp=n,cnt=0;
    while(temp>0)
    {
        r=temp%10;
        cnt++;
        temp/=10;
    }
    temp=n,r=0;
    while(temp>0)
    {
        r=temp%10;
        res=res+(pow(r,cnt));
        temp/=10;
    }
    cout<<((n==res)?"Yes":"No")<<endl;
}