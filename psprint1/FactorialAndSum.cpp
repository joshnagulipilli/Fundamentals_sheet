#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    int sum=0,r;
    while(fact>0)
    {
        r=fact%10;
        sum+=r;
        fact/=10;
    }
    cout<<sum;
}