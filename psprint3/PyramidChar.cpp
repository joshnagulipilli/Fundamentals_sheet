#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*i)-1;j++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;   
    }
}