#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     //simple solution since sum with single remainder will be in range from 0 to 9 , so mod with 9 
    //  if(n==0) cout<<0;
    //  else if(n<=9) cout<<9;
    //  else cout<<n%9;


    // two loops
    while(n>=10)  // until we get single digit
    {
        int sum=0;         // always gets new sum and that sum should be deduced  , so sum=0
        while(n>0)         //loop the new value of sum which assigned to n
        {
            sum+=n%10;     // sum of digits
            n=n/10;         // remove last digit from n
        }
        n=sum;              // assign new sum to n
    }
    cout<<n;
}