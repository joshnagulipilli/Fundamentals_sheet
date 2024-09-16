#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=2;i<=n;i++)
    {
        int e=i;
        while(n%i==0)
        {   
            if(e!=0)
               {
                sum+=i;
                e=0;
               }
            n/=i;
        }
    }
    cout<<sum;
}