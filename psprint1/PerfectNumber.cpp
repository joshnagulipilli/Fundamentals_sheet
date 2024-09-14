#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //all the factors sum is n then it is perfect square 
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n) cout<<"Perfect Number";
    else cout<<"Not a perfect number";
}