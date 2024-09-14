#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0,x=n,temp=n,r,r1;
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
    
    cout<<((res==n)?"ARMSTRONG NUMBER":"NO")<<endl;
    return 0;
} 
