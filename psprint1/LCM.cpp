#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    //checking all numbers until we get a specific number divisible by x,y
    // int ans=max(x,y);
    // do
    // {
    //     if(ans%x==0 && ans%y==0)
    //     {
    //         cout<<ans;
    //         break;
    //     }
    //     else ++ans;
    // }while(true);
    


    //   a * b = lcm(a,b) * gcd(a,b) by finding gcd we get lcm

    int lcm=1;
    int gcd=__gcd(x,y);
    lcm=(x*y)/gcd;
    cout<<lcm;
    return 0;
}
