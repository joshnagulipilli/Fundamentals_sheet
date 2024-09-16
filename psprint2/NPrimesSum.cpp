#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
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
    int n;
    cin>>n;
    int sum=0;
    int cnt=0,i=2;
    while(cnt!=n)
    {
        if(isPrime(i))
        { 
            // cout<<i<<" ";
            sum+=i;
            cnt++;
            
        }
        i++;
    }
    cout<<sum;
    return 0;
}
