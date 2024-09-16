#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int maxi=1;
   for(int i=2;i<=n;i++)
   {
    while(n%i==0)
    {
        maxi=max(maxi,i);
        n/=i;
    }
   }
   cout<<maxi;
}
