#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fib1=0,fib2=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int fib=fib1+fib2;
            cout<<fib2<<" ";
            fib1=fib2;
            fib2=fib;
        }
        cout<<endl;
    }
    
}
