#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int fib1=0,fib2=1;
    int fib;
    for(int i=2;i<=x;i++)
    {
        fib=fib1+fib2;
        fib1=fib2;
        fib2=fib;
    }
    cout<<fib2;
}