
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,cnt=0,r;
  cin>>n;
  while(n>0)
    {
        r=n%10;
        cnt++;
        n/=10;
    }
    cout<<cnt;
}

//if the number have  zeroes at front then some compilers might include them , some may not ; 
//if input is string we remove  zeroes .