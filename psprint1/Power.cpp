#include<bits/stdc++.h>
using namespace std;
int main()
{

     int base,exp;
     cin>>base>>exp;
     int p=exp-1;
     int ans=base;
     while(p--)
     {
        ans*=base;
     }
     cout<<ans;
    
}