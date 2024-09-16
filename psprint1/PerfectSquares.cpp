#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int c=1;
     for(int i=1;i<n/2;i++)                                     // if(n>=0)
     {                                                          // int p=sqrt(n)
        if(i*i==n)                                              // if(p*p==n)  yes  else no;
        {
            cout<<i<<" "<<"YES";
            c=0;
        }
     }
     if(c==1) cout<<"NO";
}