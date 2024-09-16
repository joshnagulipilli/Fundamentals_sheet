#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int temp=n;
     int cnt=0;
     while(temp>0)
     {
        temp=n%10;
        cnt+=pow(temp,2);
        n/=10;
     }
     cout<<cnt;
}