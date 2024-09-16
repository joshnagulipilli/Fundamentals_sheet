#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int x,y,sum=0;
    cin>>x>>y;
    for(int i=x;i<=y;i++)
    {
        if(isPrime(i))
        {
            sum+=i;
        }
    }
    cout<<sum;
}