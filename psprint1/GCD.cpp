#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    // cout<<__gcd(x,y)<<endl;  


    //iterative method                                       reverse way to find highest common factor 
    // int gcd=1;
    // for(int i=1;i<=min(x,y);i++)                         for(int i=min(x,y);i>=1;i--)
    // {
    //     if(x%i==0 && y%i==0) 
    //     {
    //         gcd=i;
    //     }
    // }
    // cout<<gcd<<endl;


    //euclidean       gcd(x,y)=gcd(x-y,y)    where x>y
    //gcd(52,10)  - gcd(52-10,10) - gcd(42,10) - gcd(42-10,10) -gcd(32,10) ---- gcd(12-10,10) - gcd(2,10)
    // gcd(10,2)  = gcd(10-2,2) -gcd(8,2) -gcd(8-2,2) -gcd(6,2) -gcd(6-2,2) -gcd(4,2) -gcd(4-2,2) gcd(2,2) - gcd(2-2,2) - gcd(0,2) 
     //ans is 2
    // while(x>0 && y>0)
    // {
    //     if(x>y) x=x-y;
    //     else y=y-x;
    // }
    // if(x==0) cout<<y;
    // else cout<<x;


    //we can modulo when x>y   as x%y  
    //  gcd(52,10)  = gcd(52%10,10) ==>(2,0) 

    while(x>0 && y>0)
    {
        if(x>y) x=x%y;
        else y=y%x;
    }
    if(x==0) cout<<y;
    else cout<<x;

}