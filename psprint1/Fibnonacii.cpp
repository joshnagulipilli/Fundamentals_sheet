//fibnocii series with limit range

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fib1=0,fib2=1;
    cout<<fib1<<" "<<fib2<<" ";
    int fib=0;
    while(fib<=n)
    {
        
        fib=fib1+fib2;
        if(fib<=n){
        cout<<fib<<" "; }
        fib1=fib2;
        fib2=fib;
    }
    return 0;
}