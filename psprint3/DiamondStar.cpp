#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=n/2;
    for(int i=1;i<=p;i++)
    {
        for(int j=0;j<p-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*i)-1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<p-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    if(n%2==1)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=p-1;i>=0;i--)
    {
        for(int j=p-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*i)-1;j++)
        {
            cout<<"*";
        }
        for(int j=p-1;j>=i;j--)
        {
            cout<<" ";
        }
    }
    
}