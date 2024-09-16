#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long num,digit;
     cin>>num>>digit;
     long long cnt=0;
     while(num>0)
     {
        long long r=num%10;
        if(r == digit)
        {
            cnt++;
        }
        num/=10;
     }
     cout<<cnt;
}