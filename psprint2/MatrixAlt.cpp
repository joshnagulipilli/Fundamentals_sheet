#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) flag=0;
        else flag=~flag;
        for(int j=0;j<n;j++)
        {
            cout<<flag<<" ";
            if(flag==0) flag=1;
            else flag=0;
        }
        cout<<endl;
    }
}