#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x,y;
  cin>>x>>y;
  int temp=x*y,r;
  int sum=0;
  while(temp>0)
  {
    r=temp%10;
    sum+=r;
    temp/=10;
  }
cout<<sum;
}