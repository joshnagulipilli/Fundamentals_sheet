#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n) return true;
    return false;
}

int main()
{
   int n,cnt=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
    if(isPerfect(i))
        cnt++;
   }
   cout<<cnt;
}
